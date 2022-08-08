// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// This is the question where i am supposed to find out the first and last position of an element in a sorted array
// duto part kore raakha aache akta is  for first we keep checking left and vice versa
// approach of binary search

#include <bits/stdc++.h>
using namespace std;

void FirstOccurence(int arr[], int start, int end, int key)
{
    int mid = (start + end) / 2;

    if (arr[mid] == key)
    {
        if (arr[mid] == arr[mid - 1])
        {
            end = mid - 1;
            FirstOccurence(arr, start, end, key);
        }

        if (arr[mid] > arr[mid - 1])
        {
            cout << "First occurence of " << key << " is at : " << mid << endl;
            return;
        }
    }
    else if (arr[mid] < key)
    {
        start = mid + 1;
        FirstOccurence(arr, start, end, key);
    }
    else
    {
        end = mid - 1;
        FirstOccurence(arr, start, end, key);
    }
}

void LastOccurence(int arr[], int start, int end, int key)
{
    int mid = (start + end) / 2;

    if (arr[mid] == key)
    {
        if (arr[mid] == arr[mid + 1])
        {
            start = mid + 1;
            LastOccurence(arr, start, end, key);
        }

        if (arr[mid] < arr[mid + 1])
        {
            cout << "Last occurence of " << key << " is at : " << mid << endl;
            return;
        }
    }
    else if (arr[mid] < key)
    {
        start = mid + 1;
        LastOccurence(arr, start, end, key);
    }
    else
    {
        end = mid - 1;
        LastOccurence(arr, start, end, key);
    }
}

int main()
{
    int arr[] = {0, 0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 5, 5, 5};
    FirstOccurence(arr, 0, 19, 2);
    LastOccurence(arr, 0, 19, 2);
    return 0;
}