//The question is to left rotate an array by d.
// Array = 1 2 3 4 5   d=3   {4 5 1 2 3}
//This can be done by a naive approach where we can call a function which rotates array by 1 three times..

//The most efficient approach works on the following intutuion:
//Reverse the array from 0 to d-1
//Reverse the array from d to n-1
//Reverse the whole array..

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
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

    if (n == 1)
    {
        cout << arr[0];
        return 0;
    }
    else
    {
        int d;
        cout << "Enter the value of d: "
             << " ";
        cin >> d;

        reverse(arr, 0, d - 1);
        reverse(arr, d, n - 1);
        reverse(arr, 0, n - 1);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}