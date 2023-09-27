#include <bits/stdc++.h>
using namespace std;

void sum_of_the_array(vector<int> &v, int &sum)
{
    int i = 0, j = v.size() - 1;

    while (i < j)
    {
        sum += v[i] + v[j];
        ++i, --j;
    }

    //  if the array is odd then we have to add middle element
    if (v.size() % 2 != 0)
    {
        cout << "hello" << endl;
        i = 0, j = v.size() - 1;
       
        int mid = (i + j) / 2;

        sum += v[mid];
    }

    cout << endl
         << endl;
}

void sum_of_the_array1(vector<int> &v, int &sum)
{
    for (auto &i : v)
        sum += i;
}

int main()
{
    vector<int> v = {10, 20, 40, 30, 0, 1};

    int sum = 0;

    sum_of_the_array(v, sum);

    cout << sum << endl;
}