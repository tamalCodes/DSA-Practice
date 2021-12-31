#include <bits/stdc++.h>
using namespace std;

//* So here we search for the first occurrence of the element we need to keep on moving to the left side so we make the following changes :

//^  if (target <= arr[mid])
//* If the target is less than or equal to the middle element there is still a chance that other targets occur to the left of the middle element as  //* a result we decrement the end and then we keep on looking for the targe to the left side until and unless the while loop breaks.
//* If the middle element is equal to that of target. then we put index = mid
//* and in the end we are left with the index

int firstOccurence(vector<int> &arr, int target)
{
    int index = -1;
    int start = 0, end = 9;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target <= arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        if (arr[mid] == target)
            index = mid;
    }

    return index;
}

//* For the last occurence we keep on looking at the right side
//* If we get target >= arr[mid] , then there is still a probability that there are other duplicates of the target to the right side of the mid
//* So to search more of them we still go to the right by incrementing the start and we keep on looking for target
//* until and unless the while loop breaks

int lastOccurence(vector<int> &arr, int target)
{
    int index = -1;
    int start = 0, end = 9;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target >= arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        if (arr[mid] == target)
            index = mid;
    }

    return index;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 4, 4, 4, 6, 7, 8};
    int target = 4;
    int result[] = {-1, -1};

    result[0] = firstOccurence(arr, target);
    result[1] = lastOccurence(arr, target);

    cout << "The result is : " << result[0] << ", " << result[1];
    return 0;
}