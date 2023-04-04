//? QUESTION : https://leetcode.com/problems/merge-intervals/

//^ Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

//^ first we add the first interval to the merged list 👉 int[] current_interval = intervals[0]; merged.add(current_interval);
//^ notice that then we start the for loop, the value of current_interval has not changed. So whatever changes we do the value of the current interval, it will be refelected in the merged list.

//^ so after a while [1,3] becomes [1,6].
//^ Current list 👉 [{1,6}]

//^ so if we go to [8,10] , it is not possible to merge. So we add it to the merged list. 
//^ Current list 👉 [{1,6} {8,10}]

//^ so now we go to [15,18] , it is not possible to merge with [8,10] because 15 > 10. So we add it to the merged list.
//^ Current list 👉 [{1,6} {8,10} {15,18}]

//^ time complexity (we are not sorting the array): O(n)
//^ space complexity : O(n)

import java.util.*;

public class Optimal {

    static void merge(int[][] intervals) {
        List<int[]> merged = new ArrayList<>();
        int[] current_interval = intervals[0];
        merged.add(current_interval);

        for (int[] interval : intervals) {
            if (interval[0] >= current_interval[0] && interval[0] <= current_interval[1]) {
                current_interval[1] = interval[1];
            } else {
                current_interval = interval;
                merged.add(current_interval);
            }

        }

        for (int[] interval : merged) {
            System.out.println("[" + interval[0] + ", " + interval[1] + "]");
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[][] arr = {
                { 1, 3 },
                { 2, 6 },
                { 8, 10 },
                { 15, 18 }
        };

        merge(arr);

    }
}