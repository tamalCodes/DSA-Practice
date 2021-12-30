//* These are the array basics

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;

    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Printing the array \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}