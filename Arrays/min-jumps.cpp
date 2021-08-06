#include <bits/stdc++.h>
using namespace std;

int minjumps(int arr[], int n)
{

    if (arr[0] == 0)
        return -1;

    int halt = 0, m = 0, jump = 0;
    for (int i = 0; i < n - 1; i++)
    {
        m = max(m, i + arr[i]);
        if (m >= n - 1)
        {
            jump = jump + 1;
            return jump;
        }

        if (i == halt)
        {
            halt = m;
            jump = jump + 1;
        }
    }

    if (halt >= n - 1)
        return jump;
    else
        return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << minjumps(arr, n);

    return 0;
}