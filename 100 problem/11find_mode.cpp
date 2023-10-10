/*****************************************************************
 * WRITE A PROGRAM TO FIND THE MODE OF ALL ELEMENTS IN AN ARRAY. *
 *****************************************************************/

/* 

    The mode of a set of values is the value that appears most often. If no number in the list is repeated, then there is no mode for the list.

    1. Create a dictionary to store each element of the array as keys and their counts as values.
    2. Find the maximum count (max_count) among all dictionary values.
    3. Iterate through the dictionary and print all keys which have their value equal to max_count.

*/




#include <bits/stdc++.h>
using namespace std;

vector<int> find_mode(vector<int> arr) {
    map<int, int> count_map;
    for(int& num : arr) {
        count_map[num]++;
    }
    
    int max_count = 0;
    for(auto it : count_map) {
        max_count = max(max_count, it.second);
    }
    
    vector<int> modes;
    for(auto it : count_map) {
        if(it.second == max_count) {
            modes.push_back(it.first);
        }
    }
    
    return modes;
}


int main() {
    vector<int>arr { 2, 2, 2, 3, 3, 3 };

    vector<int> ans = find_mode(arr);
    
    for(auto& i : ans) cout  << i << ",";
}