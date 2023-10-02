/************************************************************
 * WRITE A PROGRAM TO FIND THE SMALLEST ELEMENT IN AN ARRAY *
 ************************************************************/

function find_smallest_element(arr) {
    let smallest = arr[0];

    let i = 0;
    let arr_size = arr.length;

    while (i < arr_size) {
        if(arr[i] < smallest) smallest = arr[i];
        ++i;
    }
    return smallest;
}

function find_smallest_element_2(arr) {
    arr.sort((a, b) => a - b);

    return arr[0];
}

let arr = [10, 20, 30, 40, -410, 2, -30, -200, 300, 2];

console.log(find_smallest_element_2(arr))