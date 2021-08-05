#include <bits/stdc++.h>
using namespace std;

int minjumps(int arr[], int n)
{
    int i=0,count=0;
    while (i<n)
    {
       if(arr[i]==0)
       {
           return -1;
       }
       else
       {
           if(i==(n-1))
           {
               return count;
           }
           
           i=i+arr[i];
           count=count+1;
       }
       
    }
    
    
    return count;
}



int main()
{
 int n;
 cin>>n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
    cin>>arr[i];
 }
 cout<<minjumps(arr,n);
 
 return 0;
}