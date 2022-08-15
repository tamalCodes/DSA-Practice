// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
// This is similar to book allocation, here we will apply binary search to find the best partition jaateh
// prottek ta weight can get shipped within d days.

// shob theke minimum barrier ta ber korbo.

#include <bits/stdc++.h>
using namespace std;

bool allocationIsPossible(int arr[], int n, int barrier, int dDays)
{
    int totalWeights = 0, initialDays = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > barrier)
            return false;

        totalWeights += arr[i];
        if (totalWeights > barrier)
        {
            initialDays++;
            totalWeights = arr[i];
        }
    }
    cout << "Initial days = " << initialDays << endl;

    if (initialDays > dDays)
        return false;
    return true;
}

void BinarySearch(int arr[], int d, int n)
{
    int low = 0, high = 0, res = 0;

    // high will be the sum of array
    for (int i = 0; i < n; i++)
    {
        high = high + arr[i];
    }

    // binary search to find out the best barrier
    while (low <= high)
    {
        int mid = (low + high) / 2;
        cout << "Low is : " << low << " High is " << high << " mid is " << mid << endl;

        if (allocationIsPossible(arr, n, mid, d))
        {
            res = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << res;
}

int main()
{
    int arr[] = {3, 2, 2, 4, 1, 4};
    int d = 3, n = 6;

    BinarySearch(arr, d, n);

    return 0;
}