/*
Problem Name: Repetitions
Problem Link: https://cses.fi/problemset/task/1069
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int maxCount = 1, count = 1;
    char ch = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == ch)
            count++;
        else
        {
            maxCount = max(count, maxCount);
            count = 1;
            ch = s[i];
        }
    }
    maxCount = max(count, maxCount);
    cout << maxCount;

    return 0;
}