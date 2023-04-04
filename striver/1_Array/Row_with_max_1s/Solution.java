//^ Question : https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1

//^ Desc: Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

//*  Brute force approach
// Run through all the rows and count the number of 1's in each row.
// then return the row with the maximum number of 1's.
// Time complexity : O(n*m)
// Space complexity : O(1)

//*  Optimized approach
// We can use the fact that the array is sorted.
// We can start from the top right corner of the array.
// If the element is 1 then we can move to the left.
// If the element is 0 then we can move to the bottom.
// Time complexity : O(n+m)
// Space complexity : O(1)

//*  Another approach
// We can use binary search to find the first 1 in each row.
// Time complexity : O(n*log(m))
// Space complexity : O(1)

import java.util.*;

public class Solution {

    static int lookforleftmost1(int[] arr) {

        int start = 0, end = arr.length - 1;

        while (start <= end) {
            int mid = (start + end) / 2;
            if (arr[mid] == 0)
                start = mid + 1;
            else {
                // now we know that arr[mid]==1
                // if i am on the first index of the array
                // of if i am on the first 1 of the array
                if (mid == 0 || arr[mid - 1] == 0)
                    return mid;
                else
                    end = mid - 1;
            }

        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[][] arr = { { 0, 1, 1, 1 },
                { 0, 0, 1, 1 },
                { 1, 1, 1, 1 },
                { 0, 0, 0, 0 } };

        int max1 = -1;
        int rownum = 0;

        for (int i = 0; i < arr.length; i++) {

            int leftmostval = lookforleftmost1(arr[i]);

            if (max1 < leftmostval) {
                max1 = leftmostval;
                rownum = i;
            }

        }

        System.out.println("The max number of 1 is in in row : " + rownum);

    }
}
