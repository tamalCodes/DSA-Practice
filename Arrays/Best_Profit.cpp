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
 int maxp = 0,mini = INT_MAX;
 for (int i = 0; i < n; i++)
 {
    mini = min(arr[i],mini);
    maxp = max(maxp,arr[i]-mini);
 }

 cout<<maxp;
 
 
 return 0;
}