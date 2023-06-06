/*
Problem Name: Palindrome Reorder
Problem Link: https://cses.fi/problemset/task/1755
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        if (mp.find(s[i]) == mp.end())
            mp.insert(make_pair(s[i], 1));
        else
            mp[s[i]]++;
    }
    int odd = 0, oddf = 0;
    char oddc;

    for (auto &it : mp)
    {
        if (it.second % 2 == 1)
        {
            odd++;
            oddf = it.second;
            oddc = it.first;
        }
    }
    mp.erase(oddc);

    if (odd > 1)
        cout << "NO SOLUTION";
    else
    {
        for (auto &it : mp)
            for (int i = 0; i < it.second / 2; i++)
                cout << it.first;
        if (odd == 1)
            for (int i = 0; i < oddf; i++)
                cout << oddc;
        for (auto it = mp.rbegin(); it != mp.rend(); ++it)
            for (int i = 0; i < it->second / 2; i++)
                cout << it->first;
    }

    return 0;
}