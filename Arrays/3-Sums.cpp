#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums)
{
    sort(nums.begin(),nums.end());    
    vector<vector<int>> ans;

    for (int i = 0; i < nums.size()-2; i++)
    {
        /* code */
    }
    

}



int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    threesum(arr,n);
}