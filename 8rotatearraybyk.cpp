#include<bits/stdc++.h>
using namespace std;

void rotate_by_k(vector<int>&v, int k) {
    vector<int>copy_v;

    for(int i = k ; i < v.size(); i++) {
        copy_v.push_back(v[i]);
    }

    for(int i = 0; i < k; i++) copy_v.push_back(v[i]);

    for(auto&i : copy_v) cout << i << " ";

    cout << endl << endl;

}


int main() {
    vector<int>v = { 10, 20, 30, 40, 50};

    rotate_by_k(v, 2);
}