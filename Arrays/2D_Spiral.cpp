#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n,m;
 cin>>n>>m; 

 int arr[n][m];
 for (int i = 0; i < n; i++)
 {
   for (int j = 0; j < m; j++)
   {
       cin>>arr[i][j];
   }
   
 }



 int rstart=0,rend=n-1;
 int cstart=0,cend=m-1;
 
while (rstart<=rend && cstart<=cend)
{
  for (int i = cstart; i <= cend; i++)
 {
     cout<<arr[rstart][i]<<" ";
 }
 rstart++;
 
 for (int i = rstart; i <=rend; i++)
 {
    cout<<arr[i][cend]<<" ";
 }
 cend--;

 for (int i = cend; i >=cstart; i--)
 {
   cout<<arr[rend][i]<<" ";
 }
 rend--;

 for (int i = rend; i >=rstart; i--)
 {
   cout<<arr[i][cstart]<<" ";
 }
 cstart++;
}

 

 return 0;
}