open List
open String

(* open Core *)
open Core
open Syntax
open Format
open Abs


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
        (******************** Create dcfg Output File  ********************)
    let outfile_dcfg = 
    if (String.equal outfile "") 
    then "./dcfg/" ^ example_name
    else outfile 
    in
    let oc = Out_channel.create outfile_dcfg in
        (******************** run dcfg and parser code  ********************)
      let result = parse_prog infile in
      let cfg_result = Cfg.generate_cfg result in 
      let blocks = cfg_result.nodes in
      let _ =  Printf.fprintf oc "%d\n" (List.length blocks) in 
      let _ = cfg_result.node_map in
      List.fold_left ~f:( fun () block -> Printf.fprintf oc "%d," (Syntax.isQuery block) ) ~init:() blocks;
      (* Printf.fprintf oc "\n"; *)
      let string_result = print_lcommand result in
      Printf.printf "The input program is : %s" string_result;
      let _ = Df.kill result (List.nth_exn blocks 1) in
      print_newline();
      let cfg_result = Cfg.generate_cfg result in 
      let _ =  Printf.printf  "%d\n" (List.length cfg_result.nodes ) in   
      let (_, rd_in) = Df.kildall cfg_result in
      Printf.printf "DCDG result:\n";
      let dcdg_result =Dcdg.dcdg result cfg_result rd_in in
      (******************** output dcfg result ********************)
      Printf.printf "computation of the DCDG total time:%fs\n" (Caml_unix.gettimeofday () -. t) ;
      Printf.fprintf oc "\n";
      print_out_dcdg oc dcdg_result;    
      Printf.fprintf oc "\n";
      let weight_time = Caml_unix.gettimeofday () in
      let weight_list  = Weight_infer.infer result  oc blocks in 
      Weight_infer.print_weight_list  weight_list ;
      Printf.printf "computation of the weight infer time:%fs\n" (Caml_unix.gettimeofday () -. weight_time) ;
      (* Close Channel *)
      Out_channel.close oc;  

      (******************** run abscfg code  ********************)
      let time_abscfg = Caml_unix.gettimeofday () in
        (******************** Create abscfg Output File  ********************)
      let outfile_abscfg = "./abscfg/" ^ example_name in 
      let oc = Out_channel.create outfile_abscfg in
        (******************** run abscfg  ********************)
        Printf.printf "ABSCFG result:\n";
        let aflow = Abs.abs (Seq (result, (Skip (Label (-1))))) in
        (* let blocks = Cfg.blocks result in *)
        (******************** output abscfg result ********************)
        let _ =  Printf.fprintf oc "%d\n" (List.length blocks + 1)  in 
        print_out_abs_flow_edges oc aflow;
        Printf.fprintf oc "\n";
        print_out_abs_flow oc aflow;
        Printf.printf "computation of the abscfg total time:%fs\n" (Caml_unix.gettimeofday () -. time_abscfg) ;
        Printf.printf "computation of the total parsing and graph generation time:%fs\n" (Caml_unix.gettimeofday () -. t) ;
        (* Close Channel *)
        Out_channel.close oc                    