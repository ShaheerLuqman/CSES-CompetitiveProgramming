/*
Problem Link: https://atcoder.jp/contests/abc282/tasks/abc282_a?lang=en
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/
#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;

    char a = 'A';

    for (int i = 0; i < k; i++)
    {
        cout << a;
        a += 1;
    }

    return 0;
}