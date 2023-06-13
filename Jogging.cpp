/*
Problem Link: https://atcoder.jp/contests/abc249/tasks/abc249_a?lang=en
Author: Muhammad Shaheer Luqman (ShaheerLuqman)
*/
#include <iostream>
#include <map>

using namespace std;

int main()
{
    int A, // walk time A
        B, // speed A
        C, // rest time
        D, // walk time B
        E, // speed B
        F, // rest time B
        X; // total time

    cin >> A >> B >> C >> D >> E >> F >> X;

    int t1 = A * (X / (A + C));
    int t2 = X % (A + C);

    if (t2 > A)
        t1 += A;
    else
        t1 += t2;

    // cout << t1 * B;

    int t3 = D * (X / (D + F));
    int t4 = X % (D + F);

    if (t4 > D)
        t3 += D;
    else
        t3 += t4;

    // cout << t3 * E;

    if (t1 * B > t3 * E)
        cout << "Takahashi";
    else if (t1 * B < t3 * E)
        cout << "Aoki";
    else
        cout << "Draw";
}