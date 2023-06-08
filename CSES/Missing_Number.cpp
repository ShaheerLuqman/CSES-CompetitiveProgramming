/*
Problem Name: Missing Number
Problem Link: https://cses.fi/problemset/task/1083
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, temp, sum = 0;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> temp;
        sum += temp;
    }
    cout << n * (n + 1) / 2 - sum;

    return 0;
}
