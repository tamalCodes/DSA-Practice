import java.util.*;

public class Solution {

    static void calculateProduct(int[] arr) {

        // ^ [1,2,3,4]

        int[] output = new int[arr.length];
        int[] leftProducts = new int[arr.length];
        int[] rightProducts = new int[arr.length];

        leftProducts[0] = 1;
        rightProducts[arr.length - 1] = 1;

        // here we will be calculating the left product for each element and putting it
        // in the array

        // for 1, left product = 1
        // for 2, left product = (element on it's left (1) * left product until now (1))
        // for 3, left product

        for (int i = 1; i < arr.length; i++) {
            leftProducts[i] = arr[i - 1] * leftProducts[i - 1];
        }

        for (int i = arr.length - 2; i >= 0; i--) {
            rightProducts[i] = arr[i + 1] * rightProducts[i + 1];
        }

        for (int i = 0; i < leftProducts.length; i++) {
            System.out.print(leftProducts[i] + " ");
        }

    }

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4 };
        calculateProduct(arr);

    }
}