/*******************************************************************
 * WRITE A PROGRAM TO FIND THE SECOND LARGEST ELEMENT IN AN ARRAY. *
 *******************************************************************/

// using two variable

// function find_second_largest(arr, n) {
//     let i = 0;
//     let first = -1;
//     let second = -1;

//     while( i < n) {
//         if (arr[i] > first) {
//             second = first;
//             first = arr[i];
//         }
//         else if(arr[i] > second && arr[i] < first) {
//             second = arr[i];
//         }

//         i++;
//     }

//     if(second == -1) second = undefined;
//     return second;
// }

//  using sort

function find_second_largest(arr, n) {
    arr.sort((a, b) => a -b);

    return arr[n - 2];
}

arr = [10, 2, 40, 21, -1, 24, 100, 1, -3, 0];
arr_size = arr.length;

console.log(find_second_largest(arr,arr_size));
