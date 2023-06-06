/*
Problem Name: Distinct Numbers
Problem Link: https://cses.fi/problemset/task/1621
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    cout << s.size();
    return 0;
}