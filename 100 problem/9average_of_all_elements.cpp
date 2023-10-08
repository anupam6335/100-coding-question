/********************************************************************
 * WRITE A PROGRAM TO FIND THE AVERAGE OF ALL ELEMENTS IN AN ARRAY. *
 ********************************************************************/


#include<iostream>
#include<vector>
using namespace std;


int average_of_all_elements(vector<int>arr) {
    int sum = 0;

    for(auto& i : arr) sum += i;

    int avg = sum / arr.size();

    return avg;
}


int main() {
    vector<int>arr = {10, 20, 30, 40, 50};

    cout << average_of_all_elements(arr);
}