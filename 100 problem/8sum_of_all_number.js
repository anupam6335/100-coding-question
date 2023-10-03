/****************************************************************
 * WRITE A PROGRAM TO FIND THE SUM OF ALL ELEMENTS IN AN ARRAY. *
 ****************************************************************/



function sum_of_all_number(arr) {
    let sum = 0;
    let arr_size = arr.length;
    for(let i = 0; i < arr_size; ++i) sum += arr[i];

    return sum;
}




function sum_of_all_number_2(arr) {
    let sum = 0;
    let arr_size = arr.length;
    
    let i = 0, j = arr_size - 1;

    while(i < j) {
        sum += arr[i++] + arr[j--];
    }

    let mid = Math.floor(arr_size / 2);
    if(arr_size % 2 != 0) sum += arr[mid];

    return sum;
}


arr = [10, 20, 3, -2, 20, -21, 24, 100, -1]
console.log(sum_of_all_number_2(arr))