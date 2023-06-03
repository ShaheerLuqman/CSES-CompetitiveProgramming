/*
Problem Name: Number Spiral
Problem Link: https://cses.fi/problemset/task/1071
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long count = 0;

        if (a > b)
        {
            b--;
            if (a % 2 == 0)
            {
                count = a * a;
                count -= b;
            }
            else
            {
                a--;
                count = a * a;
                count++;
                count += b;
            }
        }
        else
        {
            a--;
            if (b % 2 == 1)
            {
                count = b * b;
                count -= a;
            }
            else
            {
                b--;
                count = b * b;
                count++;
                count += a;
            }
        }
        cout << count << endl;
    }

    return 0;
}