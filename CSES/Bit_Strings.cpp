/*
Problem Name: Bit Strings
Problem Link: https://cses.fi/problemset/task/1617
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long s = 1;
    for (int i = 0; i < n; i++)
        s = 2 * s % int(1e9 + 7);
    cout << s;

    return 0;
}
