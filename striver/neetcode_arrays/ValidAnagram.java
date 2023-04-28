
//! QUESTION: https://leetcode.com/problems/valid-anagram/
//! Leetcode EASY

//* DESC */

//Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
// typically using all the original letters exactly once.

//* Brute force */

// Time complexity : O(n^2)
// Space complexity : O(1)

// We will take each element and check if it is present in the array again or not, if it is present we will remove it from the array
// if it is not present we will return false

//* Optimized */

// Time complexity : O(n)
// Space complexity : O(n)

// Using an array of size 26 we will store the count/frequency of each character that is present in the string s
// counts_array[s.charAt(i) - 'a']++; --> This will give us the index of the character in the counts_array

// Suppose we have i at a character 'c' then s.charAt(i) - 'a' will give us 2 - 1 = 1, so now we will head over to counts_array[1] and increment the count there

// Just like that we will be incrementing the count of each character in the counts_array when we iterate over the string s
// Now we will iterate over the string t and decrement the count of each character in the counts_array

// If the string is an anagram then the counts_array will have all the elements as 0
// If the string is not an anagram then the counts_array will have some elements as non zero or negative

import java.util.*;

public class ValidAnagram {

    static boolean validAna(String s, String t) {

        if (s.length() != t.length())
            return false;

        int[] counts_array = new int[26];

        for (int i = 0; i < s.length(); i++) {
            counts_array[s.charAt(i) - 'a']++;
            counts_array[t.charAt(i) - 'a']--;
        }

        for (int count : counts_array) {
            if (count != 0)
                return false;
        }

        return true;
    }

    public static void main(String[] args) {
        boolean hello = validAna("null", "llln");
        System.out.println(hello);
    }

}
