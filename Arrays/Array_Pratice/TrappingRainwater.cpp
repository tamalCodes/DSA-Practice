#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int res = 0;
    int lmax[n], rmax[n];
    if (n == 1)
        cout << "0";
    else
    {
        if (n <= 2) //We need atleast 3 bars to be able to trap water
            return 0;

        int left[n],right[n];

        left[0] = 0;   //There is nothing left to the left most element.
        right[n - 1] = 0;   //There is nothing right to the right most element.

        int leftMax = arr[0];
        int rightMax = arr[n - 1];

        for (int i = 1; i < n; ++i)  //Store the leftMax for each bar
        { 
            left[i] = leftMax;
            leftMax = max(leftMax, arr[i]);
        }

        
        for (int i = n - 2; i >= 0; --i)  //Store rightMax at each bar
        { 
            right[i] = rightMax;
            rightMax = max(rightMax, arr[i]);
        }

        //Now parse the array to find the water
        int trappedWater = 0;
        for (int i = 1; i < n - 1; ++i)
        { //Find trappedWater
            if (arr[i] < left[i] and arr[i] < right[i])
                trappedWater += min(left[i], right[i]) - arr[i];
        }
        cout<<trappedWater;
    }

    return 0;
}