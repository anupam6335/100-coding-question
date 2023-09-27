#include<bits/stdc++.h>
using namespace std;

void reverse_the_array(vector<int>&v) {
    int i = 0, j = v.size() - 1;

    while(i < j) {
        swap(v[i], v[j]);
        ++i, --j;
    }
}

void print_the_array_reverse(vector<int>&v) {
    int i = v.size() - 1;

    while(i > -1) {
        cout << v[i] << " ";
        --i;
    }

    cout << endl << endl;
}

int main() {
    vector<int>v = { 10, 20, 30, 40, 50};
    for(auto&i : v) cout << i << " ";
    cout << endl << endl;
    // reverse_the_array(v);
    print_the_array_reverse(v);
    for(auto&i : v) cout << i << " ";
}