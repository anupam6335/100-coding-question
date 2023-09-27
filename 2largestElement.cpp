// Find the largest number in an array

#include<bits/stdc++.h>
using namespace std;

// using loop : time O(n)
void find_largest_in_the_array(vector<int>&v, int&max_element) {
    int max = v[0];
    for(auto&i : v) {
        if(max < i) max = i;
    }
    max_element = max;
}

// using sort : time O(n log n)
void find_largest_in_the_array_2(vector<int>&v, int&max_element) {
    sort(v.begin(), v.end());
    max_element = v[v.size() - 1 ];
}

int main() {
    vector<int>v = {10, 20, 0, -1, 45};
    int largest_element = v[0];
    find_largest_in_the_array_2(v, largest_element);
    cout << largest_element ;
    
}