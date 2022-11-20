open Syntax
open Format

type cons_info =
    Symb of string 
  | Const of int
  | While
  | If

type constriant = 
  Reset of var_info * ( var_info option )  * cons_info
| Dec of var_info *  ( var_info  option )  * cons_info
| Inc of var_info *  ( var_info  option )  * cons_info
| Asum of b_expr * cons_info
| Top


type abs_transition = label * label * constriant

let is_para var =
  if var.v_name = "k" then true
  else 
    if var.v_name = "N" then true 
    else
      if var.v_name = "c" then true 
      else false

let abs_expr var e = 
  match e with 
  | Eaexpr a ->
(    match a with
    | Aint c -> Reset (var, None, Const c)
    | Avar v -> 
      if is_para v then 
        Reset (var, None, Symb v.v_name)
    else
        Reset (var,Some v, Const 0)
    | Aaop (Sub, Avar var', Aint c) -> 
      if var = var' then 
        Dec (var, None, Const c)
    else
      Reset (var, Some var', Const c)
    | Aaop (Add, Avar var', Aint c) -> 
      if var = var' then 
        Inc (var, None, Const c)
    else
      Reset (var, Some var', Const c)
      | _ -> Reset (var, None, Symb "INF"))
  | Ebexpr _ -> Reset (var, None, Const 1)

  let rec abs_init lcom = 
    match lcom with
    | Skip l -> l
    | Assign ( _ , _ , l) -> l
    | Query ( _ ,  _ , l ) -> l
    | While ( _ , _ , l ) -> l
    | Seq ( lc_1,  _ ) -> abs_init lc_1 
    | If ( _ , _ , _ , l ) -> l

  let rec abs_final (lcom : lcommand) : (label * constriant) list 
  =
    match lcom with
    | Skip _ -> []
    | Assign (var, e, l ) -> [(l, (abs_expr var e))]
    | Query  ( var ,_ , l ) -> [(l, Reset (var, None, Symb "Q" ))]
    | While ( b , _ , l ) -> [(l, (Asum (BNeg b, While)))]
    | Seq ( _ ,  lc_2 ) -> abs_final lc_2 
    | If ( _ , lc_1 , lc_2 , _ ) -> (abs_final lc_1) @ (abs_final lc_2)
 
 
   (* Control flow graph *)
 
let rec abs_flow (lcom : lcommand) : abs_transition list =
  match lcom with
  | Skip _ -> []
  | Assign ( _ , _ , _) -> []
  | Query ( _ ,  _ , _ ) -> []
  | While ( b , lc , l ) ->   (abs_flow lc) @ [(l, abs_init lc, (Asum (b, While)))] @ 
    (List.map (fun abs_l -> let (l_1, l_constriant) = abs_l in (l_1, l, l_constriant)) (abs_final lc) ) 
  | Seq ( lc_1,  lc_2 ) -> (abs_flow lc_1) @ (abs_flow lc_2) @ 
  (List.map (fun abs_l -> let (l_1, l_constriant) = abs_l in (l_1, abs_init lc_2, l_constriant))  (abs_final lc_1) )

  | If ( b , lc_1 , lc_2 , l ) -> [ ( l, abs_init lc_1, (Asum (b, If)) ) ; (l, abs_init lc_2, (Asum ((BNeg b), If))) ] @ (abs_flow lc_1) @ (abs_flow lc_2) 
  



let print_const const = 
  match const with
  | Symb s -> s
  | Const i ->  sprintf "%d" i
  | If -> sprintf "IF:"
  | While -> sprintf "WHILE:"

let print_constriant c = 
  match c with
  | Reset (var, Some var', cons) -> sprintf " Variable Reset: [ %s <= %s + %s ] " var.v_name var'.v_name (print_const cons)
  | Dec (var, Some var', cons) -> sprintf " Variable Decrease: [ %s <= %s - %s ] " var.v_name var'.v_name (print_const cons)
  | Inc (var, Some var', cons) -> sprintf " Variable Increase: [ %s <= %s + %s ] " var.v_name var'.v_name (print_const cons)
  | Reset (var, None, cons) -> sprintf " Variable Reset: [ %s <= %s ] " var.v_name (print_const cons)
  | Dec (var, None, cons) -> sprintf " Variable Decrease: [ %s <= %s - %s ] " var.v_name var.v_name (print_const cons)
  | Inc (var, None, cons) -> sprintf " Variable Increase: [ %s <= %s + %s ] " var.v_name var.v_name (print_const cons)
  | Asum (b, cons) -> sprintf " Assume %s in %s" (print_bexpr b) (print_const cons)
  | Top -> sprintf "[True]"

let print_abs_flow aflow =
  List.fold_left (fun () (x,  y, c) -> Printf.printf "edge from %d to %d  with constriant: %s \n" (print_label x) (print_label y) 
  (print_constriant c) ) () aflow 

  
  let print_abs_flow_label aflow =
    List.fold_left (fun () (x,  y, _) -> Printf.printf "(%d, %d), " (print_label x) (print_label y)) () aflow 

    let pretty_print_constriant c = 
      match c with
      | Reset (var, Some var', cons) -> sprintf " DifferenceConstraint(\"%s\", \"%s\",\"%s\", DifferenceConstraint.DCType.RESET) " var.v_name var'.v_name (print_const cons)
      | Dec (var, Some var', cons) -> sprintf " DifferenceConstraint( \"%s\", \"%s\", \"%s\", DifferenceConstraint.DCType.DEC) " var.v_name var'.v_name (print_const cons)
      | Inc (var, Some var', cons) -> sprintf " DifferenceConstraint(\"%s\", \"%s\", \"%s\", DifferenceConstraint.DCType.INC) " var.v_name var'.v_name (print_const cons)
      | Reset (var, None, cons) -> sprintf " DifferenceConstraint(\"%s\", None,\"%s\", DifferenceConstraint.DCType.RESET) " var.v_name (print_const cons)
      | Dec (var, None, cons) -> sprintf " DifferenceConstraint(\"%s\", None, \"%s\", DifferenceConstraint.DCType.DEC) " var.v_name (print_const cons)
      | Inc (var, None, cons) -> sprintf " DifferenceConstraint(\"%s\", None, \"%s\", DifferenceConstraint.DCType.INC) " var.v_name (print_const cons)
      | Asum (b, cons) -> sprintf " DifferenceConstraint(\"%s%s\", None, None, DifferenceConstraint.DCType.ASUM) " (print_const cons) (print_bexpr b)
      | Top -> sprintf ""

      let print_abs_flow_constraints aflow =
        List.fold_left (
          fun () (x, y, c) -> 
          (let _ = Printf.printf "(%d, [%s], %d, [%d])" (print_label x) (pretty_print_constriant c) (print_label y) (print_label x)
          in let _ = Printf.printf "," in
          print_newline())
          ) () aflow
          
      
          let print_out_constriant c = 
            match c with
            | Reset (var, Some var', cons) -> sprintf "%s,%s,%s,RESET" var.v_name var'.v_name (print_const cons)
            | Dec (var, Some var', cons) -> sprintf "%s,%s,%s,DEC" var.v_name var'.v_name (print_const cons)
            | Inc (var, Some var', cons) -> sprintf "%s,%s,%s,INC" var.v_name var'.v_name (print_const cons)
            | Reset (var, None, cons) -> sprintf "%s,,%s,RESET" var.v_name (print_const cons)
            | Dec (var, None, cons) -> sprintf "%s,,%s,DEC" var.v_name (print_const cons)
            | Inc (var, None, cons) -> sprintf "%s,,%s,INC" var.v_name (print_const cons)
            | Asum (b, cons) -> sprintf "%s%s,,,ASUM" (print_const cons) (print_bexpr b)
            | Top -> sprintf ""

        let print_out_abs_flow oc aflow =
          List.fold_left (fun () (x,  y, c) -> Printf.fprintf oc "%d;%s;%d;%d\n" (print_label x) (print_out_constriant c) (print_label y) (print_label x)
           ) () aflow 
        

        let print_out_abs_flow_edges oc aflow =
          List.fold_left (fun () (x,  y, _) -> Printf.fprintf oc "%d,%d;" (print_label x) (print_label y)) () aflow 
