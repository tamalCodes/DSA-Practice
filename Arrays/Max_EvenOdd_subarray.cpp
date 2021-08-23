//The question is to find the longest even-odd subarray.
// {1 2 3 4 5 7 9}  The ans will be 5
// We check from 0 to n-1 if the element is alternating or not
//If alternating we increase the count if not we make the count=1
//if count>res we update res



#include <bits/stdc++.h>
using namespace std;
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
        cout << 0;
        return 0;
    }

    int Res = 1, count=1;
    for (int i = 0; i < n-1; i++)
    {
        if((arr[i]%2==0 && arr[i+1]%2!=0) || (arr[i]%2!=0 && arr[i+1]%2==0))
        {
            count = count + 1;  
            Res = max(Res,count);
        }
        else
        {
            count = 1;
        }
        
    }
    cout << "The res is: "<<Res;

    return 0;
}