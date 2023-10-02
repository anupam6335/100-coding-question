// Write a program to find the second largest element in an array.

#include <bits/stdc++.h>
using namespace std;
//  using sort
// void find_second_largest(vector<int>&arr, int&n, int&second_max) {
//     sort(arr.begin(), arr.end());

//     second_max = arr[n - 2];
// }

// without sorting || Two Traversals

void find_second_largest(vector<int> &arr, int &n, int &second_max)
{
   int first = INT_MIN, second = INT_MIN;
    for (int i : arr) {
        if (i > first) {
            second = first;
            first = i;
            cout << "Max: " << first << "  Second Max: " << second;
        } else if (i > second && i < first) {
            second = i;
            cout << "Max: " << first << "  Second Max: " << second;
        }
        cout << endl;
    }
    (second == INT_MIN) ?  (second_max = -1) : (second_max = second );
}

int main()
{
    vector<int> arr = {10, 2, 40, 21, -1, 24, 100, 1, -3, 0};
    int n = arr.size();
    int second_largest;
    find_second_largest(arr, n, second_largest);

    cout << second_largest << endl;
}