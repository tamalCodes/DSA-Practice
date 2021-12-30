#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the value of n and m" << endl;
    cin >> n >> m;

    int arr[n][m];

    cout << "Enter the array :" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter the value: ";
            cin >> arr[i][j];
        }
    }

    int cstart = 0;
    while (cstart < n)
    { 
        for (int j = cstart; j < m; j++)
        {
         swap(arr[cstart][j], arr[j][cstart]);
        }
        cstart++;
    }

    cout << "The transpose of the array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
