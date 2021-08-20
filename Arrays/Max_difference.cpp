//The question here is to find out the max difference in the array
//The naive approach would be a soln of nsquare where we find the difference between each pair

//The most efficient soln will be to keep  a min value.
//We go through all the elements and check the diff with the min value.
//Result will be max of the diff and result
//Min will be min of the min and current element.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, res = 0, minv = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (arr[1] > arr[0])
    {
        res = arr[1] - arr[0];
        minv = arr[0];
    }
    else
    {
        res = arr[0] - arr[1];
        minv = arr[1];
    }

    for (int i = 2; i < n; i++)
    {
        res = max(res, arr[i] - minv);
        minv = min(minv, arr[i]);
    }

    cout << res;
    return 0;
}