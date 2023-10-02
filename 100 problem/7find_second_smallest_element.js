/********************************************************************
 * WRITE A PROGRAM TO FIND THE SECOND SMALLEST ELEMENT IN AN ARRAY. *
 ********************************************************************/


function find_second_smallest_element(arr) {
    arr.sort((a, b) => a - b);

    return arr[1];
}


function find_second_smallest_element_2(arr) {
    let smallest = second_smallest = arr[0];

    let i = 0, arr_size = arr.length;

    while(i < arr_size) {
        if(arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < smallest && smallest > second_smallest) {
            second_smallest = smallest;
        }

        ++i;
    }
    
    return second_smallest;
}


let arr = [10, 20, 30, 20, 10, 0, 1, -2, -2];

console.log(find_second_smallest_element(arr))