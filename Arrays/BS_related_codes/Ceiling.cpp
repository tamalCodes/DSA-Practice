//* Celing of a target in the array is the number which is the next greatest number of the target
//* [ 2 3 6 10] , target = 8. Ceiling of 8 will be 10
//* In BS we generally pinpoint an element. The arrays are all sorted too, so the ceiling is the next element of the target.

//& LOGIC :
//* Generally in binary tree we pinpoint an element to its location in this case we are trying to return the ceiling of the target.  So what happens is if we keep on searching for the target via mid at one point the while loop condition will be violated and after that if we return the start we will get the ceiling value.

//* This actually works because in binary search the array is sorted and generally after the getting the last midpoint if we still try to search for the mid what happens is  the end actually decreases because the target is less than mid so as a result the element at the start is basically the element which is the next greater element than that of target.

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
    cout << arr[start];
}