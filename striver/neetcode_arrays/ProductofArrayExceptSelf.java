//! QUESTION: https://leetcode.com/problems/product-of-array-except-self/
//! LEETCODE MEDIUM

//* Description */

// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division operation.

// Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)

//* Solution */

import java.util.*;

public class ProductofArrayExceptSelf {

    static void findProduct(int[] arr) {
        int[] postfix = new int[arr.length];
        int[] prefix = new int[arr.length];
        int[] output = new int[arr.length];

        // calculate all the prefix
        prefix[0] = arr[0];
        for (int i = 1; i < arr.length; i++) {
            prefix[i] = arr[i] * prefix[i - 1];
        }

        // calculate all the postfix
        postfix[arr.length - 1] = arr[arr.length - 1];
        for (int i = arr.length - 2; i >= 0; i--) {
            postfix[i] = arr[i] * postfix[i + 1];
        }

        // finally go to a number and do it's prefix * postfix
        for (int i = 0; i < arr.length; i++) {
            if (i == 0) {
                output[i] = postfix[i + 1];
            } else if (i == arr.length - 1) {
                output[i] = prefix[i - 1];
            } else {
                output[i] = prefix[i - 1] * postfix[i + 1];
            }

        }

        for (int i = 0; i < output.length; i++) {
            System.out.println(output[i]);

        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr = { 1, 2, 3, 4 };
        findProduct(arr);

    }
}
