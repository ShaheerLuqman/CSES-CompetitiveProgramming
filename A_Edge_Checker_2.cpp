/*
Problem Name: A - Edge Checker 2
Problem Link: https://atcoder.jp/contests/abc285/tasks/abc285_a?lang=en
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/

#include <iostream>
using namespace std;

int parent(int i) { return (i - 1) / 2; }
int left(int i) { return (2 * i + 1); }
int right(int i) { return (2 * i + 2); }

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    if (parent(a) == b || left(a) == b || right(a) == b)
        cout
            << "Yes";
    else
        cout << "No";
    return 0;
}