//^ LEETCODE MEDIUM  : https://leetcode.com/problems/search-in-rotated-sorted-array/
//^ Striver : https://www.youtube.com/watch?v=r3pMQ8-Ad5s

//* The questions says that we will be given an 0-indexed array which is sorted in ascending order but is rotated
//* Example [12,  13,  14,  15,  16,  17,  18,  19,  0,  1,  2,  3,  4,   5,  6,   7,   8,   9,   10,  11] , target = 15

//* Firstly we need to take a start and end just like normal scenarios and find out the midpoint then we check which side of the midpoint is sorted.

//* If arr[low]<= arr[mid] left side of the mid is sorted, else right is sorted.
//* arr[mid] = 1, so since arr[low] is not less than mid, that means the right side is sorted

//* Since right is sorted we look for the element in [1,  2,  3,  4,   5,  6,   7,   8,   9,   10,  11]
//* If the element was to be there in the right side , target should be > arr[mid]  and < arr[end] ( 15 >= 1 and 15<= 11)
//* but 15 > arr[end] that means the target is not in this side so we eliminate this side and we make end= mid-1

//* [12,  13,  14,  15,  16,  17,  18,  19,  0,] this will be the new array

//* Now start = 12, end = 0 and mid = 16.
//* which side of 16 is sorted ? Since 12<16 , left side is sorted. We look for 15 in [12,  13,  14,  15,  16]
//* If element was to be here , target > 12 and < 16. Yes 15 is >12 and < 16 so we eliminate the right side of mid and end = mid - 1;

//* NEW ARRAY :  [12,  13,  14,  15 ]
//* and this continues.  . . .

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {12, 13, 14, 15, 16, 17, 18, 19, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int start = 0, end = 19;
    int target = 9;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            cout << "Value found at " << mid;
            return 0;
        }

        //* Check for sorted side
        //* left
        if (arr[mid] > arr[start])
        {
            if (target >= arr[start] && target <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            //* right side
            if (target >= arr[mid] && target <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return 0;
}