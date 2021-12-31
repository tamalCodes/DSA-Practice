//* So basically this question is aboutyou are given an infinite sorted arrayand you need to find out the position of an elementin between that sorted array

//* The logic here is to take the start and end as 0 and 1 , if the value of the target is greater than that of value of arr[end] then we simply increase the box size or the range , the start = end +1 and end = double the size of the previous box size

//* as a result we keep on searching for the condition where the target will be less than the value of the arr[end] and once we get that value of start and end we pass those values to another function that just literally performs binary search and returns all the value.

#include <bits/stdc++.h>
using namespace std;
void binSearch(int arr[], int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        //* Conditions
        if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            cout << "Value found " << mid;
            return;
        }
    }
}

void findRange(int arr[], int target)
{

    int start = 0, end = 1;

    while (target > arr[end])
    {
        int temp = end + 1;
        int boxSize = end - start + 1;
        end = end + (boxSize * 2);
        start = temp;
    }

    binSearch(arr, start, end, target);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};

    int target = 20;

    findRange(arr, target);

    return 0;
}