#include <bits/stdc++.h>
using namespace std;

int minjumps(int arr[], int n)
{
    if (arr[0] == 0)
        return -1;
    int jumps = 0, m = 0, halt = 0;

    for (int i = 0; i < n - 1; i++)
    {
        m = max(m, i + arr[i + 1]);
        if (m >= n - 1)
        {
            jumps = jumps + 1;
            return jumps;
        }

        if (i == halt)
        {
            halt = m;
            jumps = jumps + 1;
        }
    }

    if (halt >= n - 1)
        return jumps;
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