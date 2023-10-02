/*************************************************************
 * WRITE A PROGRAM TO FIND THE SMALLEST ELEMENT IN AN ARRAY. *
 *************************************************************/


#include<bits/stdc++.h>
using namespace std;

// Method 1
void find_smallest_element(vector<int>&v, int&smallest) {
    sort(v.begin(), v.end());
    smallest = v[0];
}


void find_smallest_element_2(vector<int>&v, int&smallest) {
    int i = 0;
    int v_size = v.size();

    smallest = INT_MAX;

    while( i < v_size) {
        if(smallest > v[i]) 
            smallest = v[i];
        ++i;
    }
}

int main() {
    vector<int> v = { 10, 20, 0, -1, 2, -10, 45, -45, 100};

    int smallest = 0;

    find_smallest_element_2(v, smallest);
    
    cout << smallest << endl;
}
