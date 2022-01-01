//^ LEETCODE MEDIUM : https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

//* The only diff between this and the non duplicate queston is , in non duplicate one we checked that which side is sorted. If arr[start]<mid that means left is sorted ELSE right is sorted. but here as there are duplicates we need to check if (nums[left] == nums[mid]) && (nums[right] == nums[mid])
//* If they are true we ++left and --right

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nums[] = {4, 5, 6, 6, 7, 0, 1, 2, 3, 4};
    int target = 4;
    int left = 0, right = 9, mid;

    while (left <= right)
    {
        mid = (left + right) >> 1;
        if (nums[mid] == target)
        {
            cout << "FOUND at " << mid;
            return true;
        }

        // the only difference from the first one, trickly case, just updat left and right
        if ((nums[left] == nums[mid]) && (nums[right] == nums[mid]))
        {
            ++left;
            --right;
        }

        else if (nums[left] <= nums[mid])
        {
            if ((nums[left] <= target) && (nums[mid] > target))
                right = mid - 1;
            else
                left = mid + 1;
        }
        else
        {
            if ((nums[mid] < target) && (nums[right] >= target))
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    cout << "NOT FOUND";
    return 0;
}