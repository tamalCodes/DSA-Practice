//* Question: https://leetcode.com/problems/merge-sorted-array/ */

//^ Intuition behind the mergearray() method
//^ we are using two pointers i and j
//^ we are comparing the elements of the two arrays
//^ if the element of the first array is smaller than the element of the second array, then we are incrementing the pointer i
//^ if the element of the first array is greater than the element of the second array, then we are swapping the elements and incrementing the pointer i and j

//^ if the element of the first array is 0, then we are swapping the elements and incrementing the pointer i and j
//^ The goal is to have a sorted arr1 array.

import java.util.*;

public class solution {

    static void swap(int[] arr1, int[] arr2, int i, int j) {
        int temp = arr1[i];
        arr1[i] = arr2[j];
        arr2[j] = temp;
    }

    static void mergearray(int[] arr1, int[] arr2, int m, int n) {
        int i = 0, j = 0;

        while (i < (m + n)) {
            if (arr1[i] <= arr2[j]) {

                if (arr1[i] != 0) {
                    i++;
                } else {
                    swap(arr1, arr2, i, j);
                    i++;
                    j++;
                }
            } else {
                swap(arr1, arr2, i, j);
            }
        }

        for (int j2 = 0; j2 < arr1.length; j2++) {
            System.out.println(arr1[j2]);

        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr1 = { 1, 2, 2, 0, 0, 0 };
        int[] arr2 = { 3, 5, 6 };

        int m = 3, n = 3;

        mergearray(arr1, arr2, m, n);
    }
}
