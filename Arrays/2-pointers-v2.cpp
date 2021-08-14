#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n, int x)
{
    int sum=0;
    int start=0;
    int end=0;
    int minlength = n+1;


    while(end<n)
    {
        while (sum<=x && end<n)
        {
            sum = sum + arr[end];
            end ++;
        }

        while(sum>x && start<n)
        {
            if((end-start)<minlength)   //this is for the count
            {
                minlength = end - start;
            }

            sum = sum - arr[start];
            start++;
        }
        
    }

    return minlength;
}




int main()
{
 int n, k;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) //taking the array as input
    {
        cin >> arr[i];
    }

    cin >> k; //taking the sum as input
    cout<<sum(arr,n,k);
     return 0;
}