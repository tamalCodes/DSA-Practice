//^ https://leetcode.com/problems/find-target-indices-after-sorting-array/

//* In this question we are given an unsorted arrayand we need to find out all the occurrences of a particular target and print them in ascending order.
//* The logic here is to get the first occurrence of the target and to get the last occurrence of the target and after we get both the index we run a for loop and print all the index between those two index which we get from first and last occurence

#include <bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> &arr, int target)
{
    int index = -1;
    int start = 0, end = 9;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target <= arr[mid])
            .
            {
                end = mid - 1;
            }
        else
        {
            start = mid + 1;
        }

        if (arr[mid] == target)
            index = mid;
    }

    return index;
}

int lastOccurence(vector<int> &arr, int target)
{
    int index = -1;
    int start = 0, end = 9;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target >= arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        if (arr[mid] == target)
            index = mid;
    }

    return index;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 4, 6, 7, 4, 4, 8};
    sort(arr.begin(), arr.end());

    int target = 4;

    int a = firstOccurence(arr, target);
    int b = lastOccurence(arr, target);

    while (a <= b)
    {
        cout << a << " ";
        a++;
    }

    return 0;
}