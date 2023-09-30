//  How do you reverse a string in C++?

#include<bits/stdc++.h>
using namespace std;

void reverse_string(string&str) {
    int i = 0, j = str.length() - 1;

    while(i < j) {
        swap(str[i], str[j]);
        i++, j--;
    }

    cout << endl;
}

int main() {
    string str = "";
    cin >> str;

    reverse_string(str);

    cout << str << " ";
}