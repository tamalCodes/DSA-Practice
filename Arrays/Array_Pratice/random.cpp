#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, var = 5, add = 1;
    cout << "Enter value: ";
    cin >> n;

    cout << var << " ";
    for (int i = 1; i < n; i++)
    {
        var = var + (11 * add);
        cout << var << " ";
        add += 2;
    }

    return 0;
}