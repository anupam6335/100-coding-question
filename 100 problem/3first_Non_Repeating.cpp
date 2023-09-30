// How do you print the first non-repeated character in a string?
#include<bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256


// Brute Force Method

char first_Non_Repeating(string str) {
    for (int i = 0; i < str.length(); i++) {
        bool repeated = false;
        for (int j = 0; j < str.length(); j++) {
            if (i != j && str[i] == str[j]) {
                repeated = true;
                break;
            }
        }
        if (!repeated) return str[i];
    }
    return '\0';
}


// Optimized Method using Count Array

char first_Non_Repeating(string str) {
    int count[NO_OF_CHARS] = {0};
    for (int i = 0; i < str.length(); i++)
        count[str[i]]++;
    for (int i = 0; i < str.length(); i++)
        if (count[str[i]] == 1)
            return str[i];
    return '\0';
}

int main() {
    string str;
    cin >> str; // abcdabcefabc 
    cout << first_Non_Repeating(str) << endl; // d because d is the first non-repeat char
    return 0;
}
