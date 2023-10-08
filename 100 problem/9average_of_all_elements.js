/********************************************************************
 * WRITE A PROGRAM TO FIND THE AVERAGE OF ALL ELEMENTS IN AN ARRAY. *
 ********************************************************************/

function average_of_all_elements(arr) {
    let sum = 0;

    for ( let i = 0; i < arr.length; i++) {
        sum += arr[i];
    }

    let avg = sum / arr.length;
    return avg;
}


arr = [ 10, 20, 30, 40, 50]

console.log(average_of_all_elements(arr))