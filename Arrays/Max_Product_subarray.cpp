#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int pro = 1, maxi = 0;
    for (int i = 0; i < n; i++) //taking input
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << "The product is: " << arr[0];
    }
    else
    {
        
        for (int i = 0; i < n; i++)
        {
            pro = pro * arr[i];
            if (pro <= 0)
                pro = 1;

            if (pro > maxi)
                maxi = pro;
        }
    }
    cout<<maxi;
    return 0;
}