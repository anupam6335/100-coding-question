#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int>&v) {
    sort(v.begin(), v.end());

    cout << " Increase Order : ";
    for(auto&i : v) cout << i << " ";

    cout << endl << endl;
    cout << " Decrease Order : ";
    
    int i = v.size() - 1;

    while(i > - 1) {
        cout << v[i] << " ";
        --i;
    }
}

int main() {

    vector<int>v = { 10, 0, 1, -1, 20, -3, 40, 2};

    sortArray(v);
    
    return 0;
}