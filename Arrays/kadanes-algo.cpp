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