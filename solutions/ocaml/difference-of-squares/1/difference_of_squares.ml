let square_of_sum n = 
    let gauss_sum = ((n) * (n + 1)) / 2 in
    gauss_sum * gauss_sum

let sum_of_squares n =
    ((n) * (n + 1) * (2 * n + 1)) / 6

let difference_of_squares n =
    (square_of_sum n) - (sum_of_squares n)
