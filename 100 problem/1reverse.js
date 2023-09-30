//  How do you reverse a string in JavaScript?

//  Method 1
function reverseString(str) {
    return str.split("").reverse().join("");
}


// Method 2
function reverseString(str) {
    let i = str.length  - 1;
    new_str = ""

    while( i >= 0) {
        new_str += str[i];
        i--;
    }
    return new_str;
}

// using recursion | Method 3
function reverseString(str) {
    if(str === "") {
        return "";
    } else {
        return reverseString(str.substr(1)) + str.charAt(0);
    }
}


let str = "HELLO WORLD"
console.log(reverseString(str))