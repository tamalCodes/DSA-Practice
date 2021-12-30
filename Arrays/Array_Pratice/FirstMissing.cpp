#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    
    cin >> n;

    int a[n];

    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if ((a[i] <= 0) || (a[i] > n))
            a[i] = n+1;
    }

    if(n==1){
        cout<<1;
        return 0;
    }

    for (int i = 0; i < n; i++)  //making all the
    {
        int x = abs(a[i]);
        if (x > n)
            continue;
        else
            a[x - 1] = a[x - 1] * -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            cout << i + 1;
            return 0;
        }
    }

    cout<<n+1;
    return 0;
}