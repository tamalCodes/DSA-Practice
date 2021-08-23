                                                 // KADANE'S ALGORITHM

//The question is to find the max sum of a contingous subarray.
//The array can even have negative integers so we dont care if the sum is in negative, we will simply make it 0
//The logic is to iterate from 0 to n-1 and add the sum and store it in max, 
//if the sum is greater than max then we update the value of max
//And finally return max
// arr[] = {1,2,3,-2,5}  Output:9


#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
    cin>>arr[i];
 }

 if(n==1)
 {
     cout<<arr[0];
     return 0;
 }
 else
 {
     int sum=0,max=arr[0];
     for (int i = 0; i < n; i++)
     {
        sum=sum+arr[i];
        if(sum>max)
        {
            max=sum;
        }

        if(sum<0)
        sum=0;
     }
     cout<<max;
 }
 
 
 return 0;
}