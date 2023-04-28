//! QUESTION: https://leetcode.com/problems/top-k-frequent-elements/
//! Leetcode MEDIUM

//* Desc */
// Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

//* Brute force */
// Take each element, count freqs.
// Return K most top freqs.

//* Optimal */

import java.util.*;

public class TopK {

    public static void main(String[] args) {
        int[] arr = { 1, 1, 1, 2, 2, 3 };
        int k = 2;

        System.out.println(topKFrequent(arr, k));
    }

}
