//! QUESTION: https://leetcode.com/problems/product-of-array-except-self/
//! LEETCODE MEDIUM

//* Description */

// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division operation.

// Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)

//* A possibility */
// We could have traversed the entire array and calculated the product of all the elements
// Then we could have traversed the array again and divided the product by the current element
// But since the question says that we cannot use division, we cannot use this approach

//* Solution 1 */
// When we have an array [ 1, 2, 3, 4 ]
// for 2 we have (1) * (3 * 4); so if you look properly, we have something "pre" & "post" of that number 
// So for 2 we will have the product (1 * 3 * 4) = 12

// So what we did is made 3 arrays, prefix, postfix and output
// prefix will store the products of all the elements before the current element
// postfix will store the products of all the elements after the current element
// output will store the products of all the elements except the current element

// original :     [ 1,  2,  3,  4  ]
// Prefix array:  [ 1,  2,  6,  24 ]
// Postfix array: [ 24, 24, 12, 4  ]

// So for the array [ 1, 2, 3, 4 ], when we come to 1 we will have the product of postfix[1] and prefix[1]
// So for 1 we don't have any prefix, so postfix = 24 
// So for 2 we will have 1 * 12 = 12
// So for 3 we will have 2 * 4 = 8
// So for 4 we don't have any postfix, so prefix = 6

//?  output[i] = prefix[i - 1] * postfix[i + 1];

//* Solution 2 */

// We will use the same approach as above, but we will use only 1 extra array instead of 2 extra arrays
// We will use the prefix array as it is, but we will use the postfix as a variable
// Prefix array:  [ 1,  2,  6,  24 ]
// original :     [ 1,  2,  3,  4  ]

// So we will start from the last element, and we will store the postfix in a variable as we go
// So for 4 we do not have any postfix, so postfix = 1, prefix = 6, output = 6
// Now we update postfix = postfix * arr[i] = 4 * 1 = 4

// So for 3 we have postfix = 4, prefix = 2, output = 8
// Now we update postfix = postfix * arr[i] = 4 * 3 = 12

// So for 2 we have postfix = 12, prefix = 1, output = 12
// Now we update postfix = postfix * arr[i] = 12 * 2 = 24

// So for 1 we have postfix = 24, we do not have any prefix, output = 24

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
        System.out.println("The output is: ");

        for (int i = 0; i < output.length; i++) {

            System.out.print(output[i] + " ");
        }
        System.out.println("The postfix is: ");
        for (int i = 0; i < output.length; i++) {

            System.out.print(postfix[i] + " ");

        }
        System.out.println("The prefix is: ");
        for (int i = 0; i < output.length; i++) {

            System.out.print(prefix[i] + " ");

        }
    }

    static void findProduct2(int[] arr) {
        int[] prefix = new int[arr.length];

        // calculate prefix
        prefix[0] = arr[0];
        for (int i = 1; i < prefix.length; i++) {
            prefix[i] = prefix[i - 1] * arr[i];
        }

        for (int i = 0; i < prefix.length; i++) {
            System.out.println(prefix[i]);
        }

        int postfix = 1;
        for (int i = arr.length - 1; i > 0; i--) {
            int temp = arr[i];
            arr[i] = postfix * prefix[i - 1];
            postfix = postfix * temp;
        }
        arr[0] = postfix;

        for (int i = 0; i < arr.length; i++) {

            System.out.print(arr[i] + " ");

        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr = { 1, 2, 3, 4 };
        findProduct2(arr);

    }
}
