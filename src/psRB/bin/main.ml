open List
open String

(* open Core *)
open Core
open Syntax
open Format


let infile = ref (None : string option)
let outfile = ref (None : string option)



let argDefs = [
    "-i", Arg.String (fun s -> infile := Some s  ), "specify the input file name" ;
    "-o", Arg.String (fun s -> outfile := Some s ), "specify the output file name" 
]

let parseArgs () =  
  Arg.parse argDefs 
  (fun s -> 
          match !infile  with 
                | Some (_) -> printf "%s" "specify "  
                | None  -> infile := Some (s) ) " " ;
       match !infile, !outfile  with
             | Some inf, Some outf -> (inf, outf)
             (* | Some _, None  -> printf "specify your output file name by -o outfilename"; ("", "") *)
             | Some inf, None  -> (inf, "")
             | None, Some _ -> printf "specify your input file name by -i infilename"; ("", "")
             | _ -> printf "specify your input file name and output file name "; ("", "")

let parse_prog file =
    let ic = In_channel.create file
    in
      let lb = (Lexing.from_channel ic) in 
        Parser.toplevel Lexer.main lb

let _ =
      (* Set up the start time* *)
      let t = Caml_unix.gettimeofday () in
      let (infile , outfile) = parseArgs () in 
      let example_name = hd (rev (split_on_char '/' infile)) in
      Printf.printf "The Input File is : %s\n" example_name;
        (******************** run the parser code  ********************)
        let parsed_program = parse_prog infile in
        let string_result = print_lcommand parsed_program in
        Printf.printf "The input program is : %s\n" string_result;
        Printf.printf "computation of the program parsing time:%fs\n" (Caml_unix.gettimeofday () -. t) ;

        (******************** generate the control flow graph  ********************)

        let cfg_result = Cfg.generate_cfg parsed_program in 
        let blocks = cfg_result.nodes in
        let _ =  Printf.printf "The Toal Lines is : %d\n" (List.length blocks) in 
        Printf.printf "computation of the control flow graph generation time:%fs\n" (Caml_unix.gettimeofday () -. t) ;      
      
        (******************** save the control flow graph into file  ********************)
        let outfile_cfg = 
        if (String.equal outfile "") 
        then "./cfg/" ^ example_name
        else outfile 
        in
        let oc = Out_channel.create outfile_cfg in
    
        let _ =  Printf.fprintf oc "%d\n" (List.length blocks) in 
        Printf.fprintf oc "\n";

        (* let dcdg_result =Dcdg.dcdg parsed_program cfg_result rd_in in  *)
      
      (******************** print dcfg performance ********************)
        print_out_flow oc cfg_result.edges;

      (******************** light weight inference ********************)  
        Printf.fprintf oc "\n";
        let weight_time = Caml_unix.gettimeofday () in
        let weight_list  = Weight_infer.infer parsed_program  oc blocks in 

      (******************** print light weight inference result ********************)
        Weight_infer.print_weight_list  weight_list ;
        Printf.printf "computation of the weight infer time:%fs\n" (Caml_unix.gettimeofday () -. weight_time) ;
      
      (******************** Close dcfg and light weight Output File  ********************)
        Out_channel.close oc;  

      (******************** run abscfg code  ********************)
      let time_abscfg = Caml_unix.gettimeofday () in
        
        (******************** Create abscfg Output File  ********************)
        let outfile_abscfg = 
          if (String.equal outfile "") 
          then "./abscfg/" ^ example_name
          else outfile  in 
        let oc = Out_channel.create outfile_abscfg in
        (******************** run abscfg  ********************)
        Printf.printf "The abstract transition graph result:\n";
        let aflow = Abs.abs parsed_program in
        (******************** output abscfg result ********************)
        let _ =  Printf.fprintf oc "%d\n" (List.length blocks + 1)  in 
        Abs.print_out_abs_flow_edges oc aflow;
        Printf.fprintf oc "\n";
        Abs.print_out_abs_flow oc aflow;
        Printf.printf "computation of the abscfg total time:%fs\n" (Caml_unix.gettimeofday () -. time_abscfg) ;
        (* Close Channel *)
        Out_channel.close oc                    