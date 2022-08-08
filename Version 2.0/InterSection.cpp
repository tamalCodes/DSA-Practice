#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 2, 2, 2, 3, 4};
    int b[] = {2, 2, 3, 3};

    int x = 0, y = 0;

    while (x < 6 && y < 4)
    {
        if (a[x] < b[y])
        {
            x += 1;
        }
        else if (a[x] > b[y])
        {
            y += 1;
        }
        else
        {
            cout << a[x];
            x += 1;
            y += 1;
        }
    }

    return 0;
}