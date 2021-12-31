//^ LEETCODE MEDIUM
//* https://leetcode.com/problems/find-peak-element/

//* Here we are needed to find out the peak element in the array. LOGIC  :
//* The array is sorted from 0 to peak in increasing order, after that it is sorted in decreasing order. We need to find out the greatest element. So ,  we do a binary search to find out the element which is greatest.

//* If arr[mid]>arr[mid+1] , that means all the elements to the right of the mid is less. So mid can be a possible ans, end=mid, also we should check to its left.

//* If arr[mid]<arr[mid+1] , that means elements to the left of mid is less.  mid+1 is greater ,so mid+1 can be ans also we should look at the right side.

//* We keep doing this until and unless start<end. The moment we get start=end we return the value at start / end.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 30, 7, 6, 3, 1};
    int start = 0, end = 9;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[mid + 1])
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << arr[start];

    return 0;
}