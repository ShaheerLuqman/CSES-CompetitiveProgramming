/*
Problem Link: https://vjudge.net/problem/AtCoder-abc268_b
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/
#include <iostream>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    bool flag = false;

    if (s.size() <= t.size())
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != t[i])
            {
                flag = true;
                break;
            }
        }
    }
    else
        flag = true;

    if (flag == true)
        cout << "No";
    else
        cout << "Yes";
    return 0;
}
