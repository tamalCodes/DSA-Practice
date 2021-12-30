//The question is to find out the best time to buy and sell the stocks.
//The objective is to find out the maximum profit.
//The transaction can be done as many times as you wish
//So we find out the diff between the max and min element side by side
//If arr = {7 1 5 3 6 4}   (5-1)+(6-3)=7 will be the answer
//Question: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/


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
 
 int profit = 0;


 //we will iterate through the array
 for (int i = 1; i < n; i++)
 {
    
    if(arr[i]>arr[i-1])
    {
        profit = profit + (arr[i]-arr[i-1]);
    }
 }

 cout<<"The profit is: "<<profit;
 
 
 return 0;
}