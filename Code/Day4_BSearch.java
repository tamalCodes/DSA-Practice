package Code;

import java.util.Scanner;

import javax.lang.model.util.ElementScanner6;

public class Day4_BSearch {

    public static void binarySearch(int[] arr, int n) {
        int start = 0, end = arr.length - 1;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (arr[mid] == n) {
                System.out.println("Number found at index " + mid);
                return;
            } else if (arr[mid] > n)
                end = mid - 1;
            else
                start = mid + 1;
        }
        System.out.println("Not found");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr = new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

        System.out.println("Enter the number you are looking for : ");
        int n = sc.nextInt();

        binarySearch(arr, n);
    }
}
