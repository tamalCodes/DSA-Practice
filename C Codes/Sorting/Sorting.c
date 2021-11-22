#include <stdio.h>

// bubble sort basically swaps the current element with the next element.
// you need to do bubble sort n-1 times. If 6 elements then 5 times. So (i<n-1), ie 0 to 4
// after each bubble sort the last element is the greatest.
// best case O(n), average case O(n2)
void bubble(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

// selection sort basically compares arr[i] with all the other elements
// after 1 pass the smallest element will be in the first
// Avg case = Worst case = O(n2)
void selection(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[10] = {1, 2, 5, 7, 9, 3, 6, 4, 2, 8};
    //bubble(arr, 10);
    selection(arr, 10);
    print(arr, 10);
}