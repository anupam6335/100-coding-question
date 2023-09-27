#include <bits/stdc++.h>
using namespace std;

void sum_of_the_array1(vector<int> &v, float &sum)
{
    for (auto &i : v)
        sum += i;
}

int main()
{
    vector<int> v = {10, 20, 41, 30, 33, 1};

    float sum = 0.0;

    sum_of_the_array1(v, sum);

    if (v.size() % 2 == 0)
    {
        double avg = sum / v.size();
        cout << avg << endl;
    }
    else
    {
        int avg = sum / v.size();
        cout << avg << endl;
    }
}