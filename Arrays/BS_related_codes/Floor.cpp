//^ LOGIC :

//* In binary search generally keep on trying to check if the mid value is actually equals to the target value if it is not equal to the target value then upon the conditions with either increment the start or decrement the end. Once end is smaller than start then the while loop is violated.

//* After violation the value in the start will be the value which is greater than the target and the value in the end will be the value which is less than the target so in this case if we return the end then the value in the end will be the answer..

//* 2 3 9 14 16 18 23 (s=2, m=14, e=23). 15>m
//* 16 18 23 (s=16 m=18 e=23). 15<m
//* 16 (s=m=e=16) 15<m
//* e=14 ,s=16 (VIOLATED, RETURN s).
//* ANS = 16

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, target;
    cout << "Enter the size and target: ";
    cin >> n >> target;

    int arr[n];
    cout << "Enter the values of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // cout << "Start is : " << start << "\n";
        // cout << "Mid is : " << arr[mid] << "\n";
        // cout << "End is : " << end << "\n";

        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            cout << arr[mid];
        }
    }
    cout << arr[end];
}