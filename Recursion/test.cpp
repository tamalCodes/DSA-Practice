#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c1, c2, a, b;
    int row, col, tree;

    cin >> row >> col >> tree;

    c1 = row * 2;
    a = c1 - (row - 1);

    c2 = (row * col) - row;
    b = c2 - (row - 1);

    if ((tree >= a && tree <= c1) || (tree >= b && tree <= c2))
        cout << "MANGO TREE";
    else
        cout << "NOT MANGO TREE";

    return 0;
}