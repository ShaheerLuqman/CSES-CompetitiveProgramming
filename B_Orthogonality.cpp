/*
Problem Link: https://atcoder.jp/contests/abc188/tasks/abc188_b?lang=en
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, sum = 0, temp;
    vector<int> arr;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    for (int i = 0; i < N; i++)
    {
        int b;
        cin >> b;
        b *= arr[i];
        sum += b;
    }

    if (sum == 0)
        cout << "Yes";
    else
        cout << "No";
}