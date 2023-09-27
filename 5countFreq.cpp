#include<bits/stdc++.h>
using namespace std;


void countFreq(vector<int>&v, int n) {
    // make all array elements visited 
    vector<bool>visited(n, false);

    for(int i = 0; i < n; i++) {

        // skip the element if already visited
        if(visited[i] == true) continue;

        // count 
        int count = 1;
        
        for(int j = i + 1; j < n; j++) {

            if(v[i] == v[j]) { 
                count ++; 
                visited[j] = true;
            }
        }

        cout << v[i] << " : " << count << " || ";
    }
}

// time : O(n)
void countFreq1(vector<int>&v,int n) {
    unordered_map<int,int>up;

    for(int i = 0; i < n; i++) { up[v[i]]++; }

    for(auto&i : up) {
        cout << i.first << " : " << i.second << endl;
    }
}

int main() {
    vector<int>v = {10, 0, 20, 10, 1, 20, 0, 1, 1, 10, 2};
    int n = v.size();

    countFreq(v, n);
}