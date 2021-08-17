#include<iostream>
using namespace std;

void running_sum(int arr[], int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
       sum = sum + arr[i];
       arr[i] = sum;
    }
   
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
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
    running_sum(arr,n);
    return 0;
    
}