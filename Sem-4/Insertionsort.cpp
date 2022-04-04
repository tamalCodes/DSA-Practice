// basically insertionsort e you have 2 toh parts, 1 ta sorted sub-array
// arekta unsorted subbarrray
// the first element is the first element of sorted sub-array
// the second element is the first element of unsorted sub-array
// we take the first element of unsorted sub-array and insert it into sorted sub-array after checking if the element is smaller than the last element of sorted sub-array

#include <bits/stdc++.h>
using namespace std;

// insertion sort function
void insertionSort(int arr[], int n)
{
    int i, j, temp;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;

        //  [ 1 3 5 2]
        // temp = 2
        // arr[j] = 5
        // so we check if temp is smaller than arr[j], if yes then we right shift the arr[j]
        // and this will continue until and until we find the right place to insert the temp
        // while inserting the temp we give arr[j+1] because j is getting decremented

        while (j >= 0 && arr[j] > temp)
        {
            // right shift
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}