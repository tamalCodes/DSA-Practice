#include <bits/stdc++.h>
using namespace std;
int main()
{

    int r1, r2, c1, c2;
    cout << "Enter the size of the first array of n x m" << endl;
    cin >> r1 >> c1;

    cout << "Enter the size of the second array of size m x c " << endl;
    cin >> r2 >> c2;

    r2 = c1;

    int a[r1][c1];
    int b[r2][c2];

    for (int i = 0; i < r1; i++) //array 1
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter the value: ";
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < r1; i++) //array 2
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter the value: ";
            cin >> b[i][j];
        }
    }


    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j<c1; j++)
        {
            /* code */
        }
        
    }
    

    return 0;
}