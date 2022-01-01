// //^ LEETCODE HARD
// //* https://leetcode.com/problems/find-in-mountain-array/
// //* So the array that is given here is a mountain array that means the array will be increasing, having a peak value and after that decreasing.
// //* We are given with a target therefore we need to check for 3 probabilites. The target can be peak, lie on the left side of the peak. Lie to the right side of peak.

#include <bits/stdc++.h>
using namespace std;

//* this is to find out the peak element
int peak(int arr[])
{
    int start = 0;
    int end = 6;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }

    return start;
}

//* Looking at the left of the peak
int left(int arr[], int target, int end)
{
    int start = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }

    return 0;
}

//* Looking at the right side of the peak

int right(int arr[], int target, int start)
{
    int end = 6;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target > arr[mid])
        {
            end = mid - 1;
        }
        else if (target < arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 3, 1};
    int target = 3;
    int searchPeak = peak(arr);

    if (arr[searchPeak] == target)
    {
        cout << "Target found at : " << searchPeak;
        return 0;
    }

    int endIndex = searchPeak - 1;
    int startIndex = searchPeak + 1;

    int leftSearch = left(arr, target, endIndex);
    if (arr[leftSearch] == target)
    {
        cout << "Value found at : " << leftSearch;
        return 0;
    }

    int rightSearch = right(arr, target, startIndex);
    if (arr[rightSearch] == target)
    {
        cout << "Value found at : " << rightSearch;
        return 0;
    }

    cout << "Value not found";
}