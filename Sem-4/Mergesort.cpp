// c++ program for implementation of MergeSort
#include <iostream>
#include <stdlib.h>
using namespace std;

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i = 0, j = m + 1, k = 1;

    //* LOGIC 1 : check for each element if the element is greater or lesser and then insert it in the sorted array and increment the index of the sorted array (k++) as well as i , j

    while (i <= m && j <= r)
    {
        if (arr[i] < arr[j])
        {
            // arr[i] is smaller than arr[j], so insert arr[i] at index k and increment k
            arr[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            // arr[i] is greater than arr[j], so insert arr[j] at index k and increment k
            arr[k] = arr[j];
            j++;
            k++;
        }
    }

    //* LOGIC 2 : Insert the remaining elements of the first subarray / second subarray if any into the sorted array

    // out of these 2 while loops only one of them will be executed since we know the value of i and j keeps increasing .
    // for i, i is always <= m and j is always <= r

    while (i <= m)
    {
        arr[k] = arr[i];
        i++;
        k++;
    }

    while (j <= r)
    {
        arr[k] = arr[j];
        j++;
        k++;
    }

    // after these 2 while loops we can conclude that the elements of the first subarray / second subarray are inserted into the sorted array
}

//* mergesort function
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        //* Same as (l+r)/2, but avoids overflow for
        //* large l and h
        int m = l + (r - l) / 2;

        //* Sort first and second halves
        //* first half is from 0 to m
        //* tarporer half m to r

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

// main function to do merge sort
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    mergeSort(arr, 0, n - 1);

    cout << "\n\nSorted array is \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}