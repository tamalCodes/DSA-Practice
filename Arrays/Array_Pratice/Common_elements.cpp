//Question: https://practice.geeksforgeeks.org/problems/common-elements1132/1
//The funda is to find common elements in all the 3 sorted array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2, n3;

    cin >> n1;
    cin >> n2;
    cin >> n3;

    int a[n1], b[n2], c[n3];
    cout << "Enter a[]" << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    cout << "Enter b[]" << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    cout << "Enter c[]" << endl;

    for (int i = 0; i < n3; i++)
    {
        cin >> c[i];
    }

    int i = 0, j = 0, k = 0;

    cout << "Starting loop" << endl;
    while (i < n1 && j < n2 && k < n3)
    {
        // cout<<"I is : "<<i<<endl;
        if ((a[i] == b[j]) && (b[j] == c[k]))
        {
            cout << a[i] << " ";
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
            i++;
        else if (b[j] < c[k])
            j++;
        else
            k++;
    }
    return 0;
}