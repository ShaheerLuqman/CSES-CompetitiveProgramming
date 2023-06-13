/*
Problem Link: https://atcoder.jp/contests/abc156/tasks/abc156_c?lang=en
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mid = 0;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
        mid += temp;
    }
    mid /= n;
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += pow(arr[i] - mid, 2);
        sum2 += pow(arr[i] - mid - 1, 2);
    }
    cout << min(sum1, sum2);

    return 0;
}