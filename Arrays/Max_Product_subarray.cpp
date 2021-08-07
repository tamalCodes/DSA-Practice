//This is a program to find out the maximum product of a subarray
//The logic is to select an element and to give it choices wether it wants to multiply with the prev max or min

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) //taking input
    {
        cin >> arr[i];
    }
    int choice1,choice2;
        int maxi=arr[0],mini=arr[0],ans=arr[0]; 
    if (n == 1)
    {
        cout << "The product is: " << arr[0];
    }
    else
    {
        
        
        
        for (int i = 1; i < n; i++)
        {
            choice1 = arr[i]*maxi;
            choice2 = arr[i]*mini;

            maxi = max(arr[i],max(choice1,choice2));
            mini = min(arr[i],min(choice1,choice2));
            ans = max(ans,maxi);
        }
        
    }
    cout<<ans;
    return 0;
}