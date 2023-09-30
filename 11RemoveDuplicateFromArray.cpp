#include<bits/stdc++.h>
using namespace std;

vector<int> remove_duplicate(vector<int>&v, int n) {
    unordered_map<int,int>mp;
    for(auto& i : v) mp[i]++;

    vector<int>new_array;

    for(auto a : mp) new_array.push_back(a.first);
    sort(new_array.begin(), new_array.end());
    return new_array;
}
//  NOT CORRECT ANS ❌
vector<int> remove_duplicate_opt(vector<int>v, int n) {
    vector<int>new_v;
    int j = 1;
    for(int i = 0; j < n and i < n - 1; i ++) {
        if(v[i] != v[j]) { new_v.push_back(v[j]); j++;}
    }
    return new_v;
}

int main() {
    vector<int>arr = { 1, 1, 2, 2, 2,2 , 3, 3, 4, 4};

    vector<int> ans =  remove_duplicate_opt(arr, arr.size());

    for(auto&i: ans) { cout << i << " " ; }
}