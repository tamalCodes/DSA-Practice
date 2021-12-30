//There will be an array of size n where there will be 1 repeating and 1 missing element.
//The goal is to print both of them
//The elements will be from 1 to n 

#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n,x,t;
 cin>>n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
     cin>>arr[i];
 }
 

 for (int i = 0; i < n; i++)
 {
    if(arr[i]<0)
    {
        t = abs(arr[i]) - n;
    }
    else
    {
        t=arr[i];
    }
    
    
    if(arr[t-1]<0)
    {
        //t = arr[i];
        x = (arr[t-1] - n);
        x = x * (-1); 
    }
    else
    {
        //t = arr[i];
         x = (arr[t-1] + n) * -1;
    }
    
    
    arr[t-1] = x;
 }

for (int i = 0; i < n; i++)
 {
    if(arr[i]>n)
    cout<<"Repeating element: "<<i+1<<endl;

    if(arr[i]>0 && arr[i]<=n)
    cout<<"Missing element: "<<i+1<<endl;
 }


 return 0;
}