// Find Second Smallest and Second Largest Element in an array
#include<bits/stdc++.h>
using namespace std;

// using loop : time : O(n)
void find_large_small(vector<int>&v, int&small, int&large) {
    int n = v.size();
    for(int i = 0; i < n; i++) {
        if(small > v[i]) small = v[i];
        if(large < v[i]) large = v[i];
        // below two line for debug code
        // cout << "current : " << v[i] << " ";
        // cout << "sm : " << small << "  " << "large : " << large << endl;
    }
}

// using sort : time - o(n log n)
void find_large_small2(vector<int>&v, int&small, int&large) {
    sort(v.begin(), v.end());
    small = v[0], large = v[v.size() - 1];
}

int main() {
    vector<int>v = {20, 0, -1, 45, 10, -2, 23, 24, 1000};
    int small = INT_MAX, large = INT_MIN;

    find_large_small(v, small, large);
    cout << small << " " << large ;
}