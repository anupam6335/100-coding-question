/****************************************************************
 * WRITE A PROGRAM TO FIND THE SUM OF ALL ELEMENTS IN AN ARRAY. *
 ****************************************************************/



#include<bits/stdc++.h>
using namespace std;

void sum_of_all_number(vector<int>&v, int&sum) {
    for(auto&i : v) sum += i;
}

void sum_of_all_number_2(vector<int>&v, int&sum) {
    int i =0, j = v.size() - 1;
    while(i < j) {
        sum += v[i] + v[j];

        i++, j--;
    }

    if (v.size() % 2 != 0) sum += v[v.size() / 2];
}
int main() {
    vector<int> v = {10, 20, 3, -2, 20, -21, 24, 100, -1};

    int sum = 0;

    sum_of_all_number_2(v, sum);

    cout << sum << endl;

}
