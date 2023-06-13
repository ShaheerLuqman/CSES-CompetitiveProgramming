/*
Problem Link: https://atcoder.jp/contests/abc219/tasks/abc219_b?lang=en
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3, T, str = "";
    int num;
    cin >> s1 >> s2 >> s3 >> T;

    for (int i = 0; i < T.length(); i++)
    {
        stringstream ss;

        ss << T[i];
        ss >> num;

        if (num == 1)
            str += s1;
        else if (num == 2)
            str += s2;
        else if (num == 3)
            str += s3;
    }

    cout << str;
}
