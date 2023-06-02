/*
Problem Name: Weird Algorithm
Problem Link: https://cses.fi/problemset/task/1068
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    cout << n << " ";
    while (n != 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        cout << n << " ";
    }
    return 0;
}