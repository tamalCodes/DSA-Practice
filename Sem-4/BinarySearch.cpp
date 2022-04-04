//* array will be sorted in ascending order , so we can use binary search
//* we look for middle element and compare it with key
//* if key is greater, we look in right half
//* if key is smaller, we look in left half
//* if key is equal, we return the index

//* [1,2,3,4,5,6,7,8,9,10] key = 2
//* middle = 4, arr[4] = 5
//* so since key is less than 5, we look in left half
//* [1,2,3,4] key = 2 middle = 1, arr[1] = 2

#include <bits/stdc++.h>
using namespace std;

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
    int arr[10] = {1, 2, 3, 4, 4, 4, 4, 6, 7, 8};
    int key;
    cout << "Enter the key needed to be searched for : ";
    cin >> key;

    binary(arr, 10, key);
    return 0;
}
