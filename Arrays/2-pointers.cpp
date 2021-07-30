//Find the continous subarray with the given sum "k"
//{10 3 5 8 6 12 20 15} Given sum is "31" so the longest subarray will be {5 8 6 12} that is : 2 to 5
// Time constraint: "O(n)"

//To cope up with the time constraints we use the 2-pointers technique which will substract value from the starting if sum>k else it will keep adding.
// Made with love, by Tamal


#include <iostream>
using namespace std;

void sum(int arr[], int n, int k)
{
    int sum=arr[0];
    int start=0;
    int end=1;

    while(end<=n)
    {
        if(sum==k)
        {
            cout<<start<<" to "<<end-1<<endl;
            return;
        }

        if(sum<k && end<n)
        {
            sum = sum+arr[end];
            end++;
        }

        if(sum>k && start<end)
        {
            sum=sum-arr[start];
            start++;
        }
    }
}


int main()
{
    int n, k;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) //taking the array as input
    {
        cin >> arr[i];
    }

    cin >> k; //taking the sum as input
    sum(arr,n,k);
    
    return 0;
}