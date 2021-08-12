//The question is to find out the best time to buy and sell the stocks.
//The objective is to find out the maximum profit.
//Question: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


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
 
 //We have taken the value of max as zero and min as intmax
 int maxp = 0,mini = INT_MAX;


 //we will iterate through the array
 for (int i = 0; i < n; i++)
 {
    
    //if arr[i] is the minimum then we update the min
    //if arr[i]-min is the max profit then we update the max
    mini = min(arr[i],mini);
    maxp = max(maxp,arr[i]-mini);
 }

 cout<<maxp;
 
 
 return 0;
}