// question : https://leetcode.com/problems/maximum-subarray/
// desc: Given an integer array nums, find the  subarray with the largest sum, and return its sum.

import java.util.*;

public class Brute {

    static void runBrute(int[] arr) {

        int largestSum = 0, sum = 0;

        for (int i = 0; i < arr.length - 1; i++) {
            sum = arr[i];

            for (int j = i + 1; j < arr.length; j++) {
                sum += arr[j];
                if (sum > largestSum)
                    largestSum = sum;
            }

        }

        System.out.println("The largest sum is : " + largestSum);

    }

    // intuition behind the runBrute() method
    // we are taking the sum of all the subarrays and then finding the largest
    // sum

    static void runBetter(int[] arr) {
        int largestSum = arr[0], sum = 0;

        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];

            if (sum < 0)
                sum = 0;

            if (sum > largestSum)
                largestSum = sum;

        }

        System.out.println("The largest sum is : " + largestSum);

    }

    // intution behind the runBetter() method
    // if the sum is negative, then it is not contributing to the largest sum
    // so we can reset the sum to 0
    // and if the sum is greater than the largest sum, then we can update the
    // largest sum

    // time complexity : O(n)
    // space complexity : O(1)

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
        runBetter(arr);

    }
}
