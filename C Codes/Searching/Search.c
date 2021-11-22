#include <stdio.h>

// normal linear search where we go through all the elements and find the value
// Worst case : O(n), the element is at the last/ not present
// Best Case : O(1), the element is present at the first
void Linear(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Value found");
            return;
        }
    }
}

// Binary search here we divide the array. Array needs to be sorted
//
void Binary(int arr[], int n, int key)
{
    int left = 0, right = n - 1, mid = 0;
    while (left <= right)
    {
        mid = (left + right) / 2;

        if (arr[mid] == key)
        {
            printf("Value found");
            return;
        }
        else if (key < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    printf("Value not found ");
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Linear(arr, 10, 6);
    // Binary(arr, 10, 13);
}