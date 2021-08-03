//Here i have used a STL : Swap()
//This was a question from Love Babbar's Cracksheet

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) //input
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n / 2; i++) //reverse
    {
        swap(arr[i], arr[n - (i + 1)]);
    }

    for (int i = 0; i < n; i++) //output
    {
        cout << arr[i] << " ";
    }
    return 0;
}