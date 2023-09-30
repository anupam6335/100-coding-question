// Write a program to find the largest element in an array.

function find_largest_element(arr) {
    let i = 1;
    let max = arr[0];
    let arr_size = arr.length;

    while (i < arr_size) {
        if(max < arr[i]) max = arr[i];
        i++;
    }

    return max;
}

arr = [10, 20, 40, 1, 2, 0, 500, 24, 100]

maxi = Math.max(...arr)
console.log(maxi)

console.log(find_largest_element(arr))