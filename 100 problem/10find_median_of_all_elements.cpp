/*******************************************************************
 * WRITE A PROGRAM TO FIND THE MEDIAN OF ALL ELEMENTS IN AN ARRAY. *
 *******************************************************************/


/* 

    The logic to find the median of an array:

    1. Sort the array in ascending order.
    2. If the number of elements (n) in the array is odd, then the median is the value at index n/2 (considering 0-based indexing).
    3. If n is even, then the median is the average of the values at indices n/2 - 1 and n/2. 

 */


#include <bits/stdc++.h>
using namespace std;

int find_median_of_all_elements(vector<int> arr ) {
    int arr_size = arr.size();
    sort(arr.begin(), arr.end());
    int median = 0;

    if (arr_size % 2 == 0) {
        median = (arr[arr_size / 2] + arr[arr_size / 2 - 1 ]) / 2;
    } else {
        median = arr[arr_size / 2];
    }

    return median;
}

int main() {
    vector<int> arr = { 10, 20, 30, 40, 50, 60};

    cout << find_median_of_all_elements(arr);
}