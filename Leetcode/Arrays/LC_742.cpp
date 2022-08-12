#include <bits/stdc++.h>
using namespace std;

int pivot(int arr[], int n)
{
    int totalSum = 0;
    for (int j = 0; j < n; j++)
    {
        totalSum += arr[j];
    }
    int leftSum = 0, rightSum = totalSum - arr[0];
    int i = 1;
    while (leftSum != rightSum && i < n)
    {
        leftSum += arr[i - 1];
        rightSum -= arr[i];
        i++;
    }
    if (leftSum == rightSum)
        return i - 1;
    else
        return -1;
}
int main()
{
    int arr[] = {
        2, 1, -1};

    int index = pivot(arr, 3);
    cout << "Pivot index is : " << index << endl;
    return 0;
}