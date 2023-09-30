// How do you calculate the number of vowels and consonants in a string?

function isVowel(ch) {
    return ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'].includes(ch);
}

function count_vowel_and_consonants(str) {
    let vowels = 0;
    let consonants = 0;

    for (let i = 0; i < str.length; i++) {
        if (isVowel(str[i])) {
            vowels++;
        } else {
            consonants++;
        }
    }

    console.log(`Vowels: ${vowels}`);
    console.log(`Consonants: ${consonants}`);
}

//  optimzed  code

function count_vowel_and_consonants(str) {
    let vowels = 0;
    let consonants = 0;

    for (let i = 0; i < str.length; i++) {
        if ('aeiouAEIOU'.includes(str[i])) {
            vowels++;
        } else if (str[i].match(/[a-z]/i)) {
            consonants++;
        }
    }

    console.log(`Vowels: ${vowels}`);
    console.log(`Consonants: ${consonants}`);
}




let str = "umbrella";
let consonants = 0;
let vowels = 0;
count_vowel_and_consonants(str);