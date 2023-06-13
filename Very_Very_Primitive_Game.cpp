/*
Problem Link: https://atcoder.jp/contests/abc190/tasks/abc190_a?lang=en
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b || (a == b && c == 1))
        cout << "Takahashi" << endl;

    else if (b > a || (a == b && c == 0))

        cout << "Aoki" << endl;

    return 0;
}