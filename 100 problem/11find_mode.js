/*****************************************************************
 * WRITE A PROGRAM TO FIND THE MODE OF ALL ELEMENTS IN AN ARRAY. *
 *****************************************************************/

/* 

    The mode of a set of values is the value that appears most often. If no number in the list is repeated, then there is no mode for the list.

    1. Create a dictionary to store each element of the array as keys and their counts as values.
    2. Find the maximum count (max_count) among all dictionary values.
    3. Iterate through the dictionary and print all keys which have their value equal to max_count.

*/

function find_mode(arr) {
    let count_map = {};
    for(let num of arr) {
        if(num in count_map) {
            count_map[num]++;
        } else {
            count_map[num] = 1;
        }
    }
    
    let max_count = Math.max(...Object.values(count_map));
    // console.log(max_count, "\n") 
    
    let modes = [];
    for(let num in count_map) {
        if(count_map[num] === max_count) {
            modes.push(Number(num));
        }
    }
    
    return modes;
}


let arr = [2, 2, 2, 3, 3, 3];
console.log(find_mode(arr));