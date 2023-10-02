/********************************************************************
 * WRITE A PROGRAM TO FIND THE SECOND SMALLEST ELEMENT IN AN ARRAY. *
 ********************************************************************/

#include <bits/stdc++.h>
using namespace std;

void find_second_smallest_element(vector<int> &v, int &second_smallest)
{
    sort(v.begin(), v.end());
    second_smallest = v[1];
}

void find_second_smallest_element_2(vector<int> &v, int &second_smallest)
{
    int smallest = INT_MAX;
    int i = 0;

    for (auto &i : v)
    {
        if (i < smallest)
        {
            second_smallest = smallest;
            smallest = i;
        }
        else if (i < smallest and second_smallest < smallest)
        {
            second_smallest = i;
        }
    }
}

int main()
{
    vector<int> v = {10, 20, 3, -1, 20, -21, 24, 100};

    int second_smallest = 0;
    find_second_smallest_element_2(v, second_smallest);
    cout << second_smallest;
}