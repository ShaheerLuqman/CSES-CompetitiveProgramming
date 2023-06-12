/*
Problem Link: https://atcoder.jp/contests/abc283/tasks/abc283_c?lang=en
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0;
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0' && s[i + 1] == '0')
            i++;
        count++;
    }
    cout << count;
}