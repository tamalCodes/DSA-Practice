//* Well these are the array sorting algorithms

#include <bits/stdc++.h>
using namespace std;

//* Linear search
//* Here we simply search the whole array for a key value
//* If we find it, it's okay else it's not

void linear(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Key found";
            return;
        }
    }
    cout << "Key not found";
}

//* Here we look at the middle of the array
//* If element is > mid, we look at the right and vice versa
//* We keep doing this while start <= end
//* we dont do int mid = (start + end) / 2 because if the value is too large then size of int might be exceeded
//* So we use mid = start + (end-start)/2

void binary(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        //* Conditions
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            cout << "Value found " << mid;
            return;
        }
    }

    cout << "Value not found";
}

int main()
{
    int n, key;
    // cout << "Enter the size of the array : ";
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    int arr[10] = {1, 2, 3, 4, 4, 4, 4, 6, 7, 8};

    cout
        << "Enter the key needed to be searched for : ";
    cin >> key;

    // linear(arr, 10, key);
    binary(arr, 10, key);
    return 0;
}