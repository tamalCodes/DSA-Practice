// KADANE'S ALGORITHM

//The question is to find the max sum of a contingous subarray.
//The array can even have negative integers so we dont care if the sum is in negative, we will simply make it 0
//The logic is to iterate from 0 to n-1 and add the sum and store it in max,
//if the sum is greater than max then we update the value of max
//And finally return max
// arr[] = {1,2,3,-2,5}  Output:9

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << 0;
        return 0;
    }

    int Res = 1, count=1;
    for (int i = 0; i < n-1; i++)
    {
        if((arr[i]%2==0 && arr[i+1]%2!=0) || (arr[i]%2!=0 && arr[i+1]%2==0))
        {
            count = count + 1;  
            Res = max(Res,count);
        }
        else
        {
            count = 1;
        }
        
    }
    cout << "The res is: "<<Res;

    return 0;
}