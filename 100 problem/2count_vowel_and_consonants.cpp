// How do you calculate the number of vowels and consonants in a string?

#include <bits/stdc++.h>
using namespace std;

// # brute force approch

bool isVowel(char ch)
{
    if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U')
        return true;
    return false;
}
void count_vowel_and_consonants(string &str, int &vowels, int &consonants)
{

    int i = 0, n = str.size();
    while (i < n)
    {
        if (isVowel(str[i]))
        {
            vowels++;
            // cout << i << " ";
        }
        else
        {
            consonants++;
        }
        ++i;
    }
    cout << endl;
}

void count_vowel_and_consonants(const string& str, int& vowels, int& consonants) {
    set<char> vowel_set = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    for (char c : str) {
        if (vowel_set.count(c)) {
            vowels++;
        } else if (isalpha(c)) {
            consonants++;
        }
    }
}

int main()
{
    string str = "";
    cin >> str;

    int vowels = 0, consonants = 0;

    count_vowel_and_consonants(str, vowels, consonants);

    cout << "vowels: " << vowels << " Consonants: " << consonants;
}