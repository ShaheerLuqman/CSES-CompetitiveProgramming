/*
Problem Name: Permutations
Problem Link: https://cses.fi/problemset/task/1070
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n == 1)
        cout << 1;
    else if (n == 2 || n == 3)
        cout << "NO SOLUTION";
    else
    {
        vector<int> v;

        v.reserve(n);
        for (int i = n; i > 0; i--)
        {
            if (i % 2 == 1)
                v.push_back(i);
        }

        for (int i = n; i > 0; i--)
        {
            if (i % 2 == 0)
                v.push_back(i);
        }

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
    }

    return 0;
}
