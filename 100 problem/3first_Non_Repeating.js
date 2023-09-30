// How do you print the first non-repeated character in a string?

// Brute Force Method
function first_Non_Repeating_BF(str) {
    for (let i = 0; i < str.length; i++) {
        let repeated = false;
        for (let j = 0; j < str.length; j++) {
            if (i != j && str[i] == str[j]) {
                repeated = true;
                break;
            }
        }
        if (!repeated) {
            return str[i];
        }
    }
    return null;
}

// Optimized Method using Count Object
function first_Non_Repeating(str) {
    let count = {};
    for (let i = 0; i < str.length; i++) {
        if (str[i] in count) {
            count[str[i]] += 1;
        } else {
            count[str[i]] = 1;
        }
    }
    for (let i = 0; i < str.length; i++) {
        if (count[str[i]] == 1) {
            return str[i];
        }
    }
    return null;
}

let str = "abcdabcefabc"; // abcdabcefabc 
console.log(first_Non_Repeating(str)); // d because d is the first non-repeat char
