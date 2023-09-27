// Find the smallest number in an array

#include<bits/stdc++.h>
using namespace std;

// using loop : time - O(n)
void findSmallestNumberUsingLoop(vector<int>&v, int&sm) {
    int n = v.size();
    int min = v[0];
    for(int i = 1; i < n; ++i) {
        if(min > v[i]) min = v[i];
    }
    sm = min;
}

// using sort function : time - O(n long n)
void findSmallestNumberInTheArray(vector<int>&arr, int&smallestNumber) {
    sort(arr.begin(), arr.end());
    smallestNumber = arr[1];
}

// using min_element in c++ time - O(n)
void findSmallestNumberUsingMin_element(vector<int>&arr, int&smallestNumber) {
    smallestNumber = *min_element(arr.begin(), arr.end());
}

// optimized using dived conquire : time - o(n log n) 
// NOTE : array must be sorted
int findSmall(vector<int>&v, int low, int high) {
    if (high == low)
        return v[low];
    if (high == low + 1)
        return min(v[low], v[high]);
    int mid = (low + high) / 2;
    if (v[mid - 1] > v[mid] && v[mid] < v[mid + 1])
        return v[mid];
    if (v[mid] > v[high])
        return findSmall(v, mid + 1, high);
    else
        return findSmall(v, low, mid - 1);
}

int main () {
    vector<int>arr;
    int smallestNumber = 0, n;

    cin >> n;

    for(int i = 0; i < n; i ++) {
        int a; cin >> a;
        arr.push_back(a);
    }

    // findSmallestNumberUsingMin_element(arr, smallestNumber);
    smallestNumber = findSmall(arr, 0, arr.size());
    cout << smallestNumber;
    return 0;
}


/*
    solution no 1 : using loop
    solution no 2 :sort the array and return zeroth element
*/