//Longest arithmatic subarray
//If the array is {5 4 3 2 1 2 3 4 5 6} the ans will be 5

#include <bits/stdc++.h>
using namespace std;

int streakchecker(int arr[], int n)
{
    int streak = 1;
    int pd = arr[1] - arr[0];
    int cd = 0, ans = 0;

    for (int i = 1; i < n; i++)
    {
        cd = arr[i + 1] - arr[i];
        if (cd == pd)
        {
            streak = streak + 1;
        }
        else
        {
            if (streak > ans)
            {
                ans = streak;
            }

            streak = 1;
            pd = cd;
        }
    }

    cout << "Longest streak = " << ans << endl;
    return 0;
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

    streakchecker(arr, n);

    return 0;
}