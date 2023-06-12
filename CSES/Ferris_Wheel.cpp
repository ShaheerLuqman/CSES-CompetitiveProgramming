/*
Problem Name: Ferris Wheel
Problem Link: https://cses.fi/problemset/task/1090
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/
// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef array<int, 2> ii;
typedef vector<ii> vii;

void solve();

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    vi v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(all(v));
    int i = 0, j = n - 1, g = 0;
    while (i <= j)
    {
        if (v[i] + v[j] <= x)
            g++, i++, j--;
        else
            g++, j--;
    }
    cout << g;
}