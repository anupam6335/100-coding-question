// Write a program to find the largest element in an array.
#include<bits/stdc++.h>
using namespace std;



// method 1
void find_largest_element(vector<int>&v, int&max) {
    int i = 0, v_size = v.size();

    while(i < v_size) {
        if(max < v[i]) max = v[i];
        ++i;
    }
}


// Method 2
void find_largest_element(vector<int>&v, int&max) {
    sort(v.begin(), v.end());
    max = v[v.size() - 1];
} 

int main() {
    vector<int>v = { 10, 20, 300, -1, 20, 50, 1, 12, 72, 22, 45};

    int max = INT_MIN;
    find_largest_element(v, max);
    cout << max << endl;
}