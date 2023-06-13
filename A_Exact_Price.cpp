/*
Problem Link: https://atcoder.jp/contests/abc223/tasks/abc223_a?lang=en
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0)
        cout << "No";
    else if (n % 100 == 0)
        cout << "Yes";
    else
        cout << "No";
}
