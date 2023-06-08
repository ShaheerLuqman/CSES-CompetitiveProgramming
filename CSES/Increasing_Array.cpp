/*
Problem Name: Increasing Array
Problem Link: https://cses.fi/problemset/task/1094
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, s = 0, lastmax;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    lastmax = v[0];
    for (int i = 1; i < n; i++)
    {
        if (lastmax > v[i])
            s += lastmax - v[i];
        else
            lastmax = v[i];
    }
    cout << s;
    return 0;
}
