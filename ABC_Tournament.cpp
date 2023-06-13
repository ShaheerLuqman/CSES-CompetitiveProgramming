/*
Problem Link: https://vjudge.net/problem/AtCoder-abc188_c
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    vector<int> arr2;

    arr2 = arr;
    int n;
    cin >> n;
    int N = 2, temp;

    for (int i = 0; i < n - 1; i++)
        N *= 2;

    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        arr.push_back(temp);
        arr2.push_back(temp);
    }

    while (N > 2)
    {
        int j = 0;
        for (int i = 0; i < N; i += 2)
        {
            arr[j] = max(arr[i], arr[i + 1]);
            j++;
        }
        N /= 2;
        // for (int i = 0; i < N; i++)
        //     cout << arr[i] << " ";

        // cout << endl;
    }

    int ser = min(arr[0], arr[1]);

    for (int i = 0; i < arr2.size(); i++)
    {
        if (arr2[i] == ser)
            cout << i + 1;
    }
}