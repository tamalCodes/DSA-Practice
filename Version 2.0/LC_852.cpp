#include <bits/stdc++.h>
using namespace std;

void peakIndex(int arr[], int start, int end)
{

    int mid = (start + end) / 2;

    if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
    {
        cout << "Peak index is found at : " << mid << endl;
        return;
    }

    if (arr[mid] > arr[mid - 1])
    {
        start = mid + 1;
        peakIndex(arr, start, end);
    }

    if (arr[mid] < arr[mid - 1])
    {
        end = mid - 1;
        peakIndex(arr, start, end);
    }
}

int main()
{
    // int arr[] = {1, 1, 1, 2, 3, 5, 8, 7, 6, 5};
    // peakIndex(arr, 0, 9);

    int arr[] = {0, 10, 5, 2};
    peakIndex(arr, 0, 3);

    return 0;
}