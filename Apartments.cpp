/*
Problem Name: Apartments
Problem Link: https://cses.fi/problemset/task/1084
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
    int n, m, k, o = 0;
    cin >> n >> m >> k;

    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(all(a));

    vi c(m);
    for (int i = 0; i < m; i++)
        cin >> c[i];
    sort(all(c));

    int j = 0;
    for (int i = 0; i < m; i++)
    {
        while (j < n && a[j] < c[i] - k)
            j++;

        if (j < n && a[j] <= c[i] + k)
        {
            o++;
            j++;
        }

        if (j == n)
            break;
    }

    cout << o << endl;

    return;
}
