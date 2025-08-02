type nucleotide = A | C | G | T

let rec hamming_distance dna1 dna2 =
  let rec helper lst1 lst2 = 
    match (lst1, lst2) with
      | h1::t1, h2::t2 ->
          let rest = helper t1 t2 in 
          (match rest with 
            | Ok x -> Ok (if h1 = h2 then x else x + 1)
            | Error x -> Error x)
      | [], [] -> Ok 0
      | _, _ -> Error "left and right strands must be of equal length"
  in
  match dna1, dna2 with    
    | [], [] -> Ok 0
    | [], _ -> Error "left strand must not be empty"
    | _, [] -> Error "right strand must not be empty"
    | _, _ when List.length dna1 <> List.length dna2 ->
        Error "left and right strands must be of equal length"
    | _, _ -> helper dna1 dna2