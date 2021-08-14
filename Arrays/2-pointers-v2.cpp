//https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1

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
        while (sum<=x && end<n) //until and unless the sum is greater than x we keep increasing it
        {
            sum = sum + arr[end];
            end ++;
        }

        while(sum>x && start<n)  //as soon as the sum is greater than x we decrease it from the start while it is still greater than x
        {
            if((end-start)<minlength)   //if the new subarray's length is less than x update the minlength
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