#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int arr[n];
 for (int i =0 ; i < n; i++)
 {
    cin>>arr[i];
 }

 int low = 0,mid = 0;
 while(mid<n)
 {
     if(arr[mid]<0)
     {
         swap(arr[low++],arr[mid++]);
     }
     else
     {
         mid++;
     }
     
 }

 for (int i =0 ; i < n; i++)
 {
    cout<<arr[i]<<" ";
 }
 return 0;
}