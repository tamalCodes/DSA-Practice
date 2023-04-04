import java.util.*;

public class Optimal {

    static void swap(int[] arr, int a, int b) {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    static void runOptimal(int[] arr) {
        int low = 0, mid = 0, high = arr.length - 1;

        while (mid <= high) {
            if (arr[mid] == 0) {
                swap(arr, low, mid);
                mid++;
                low++;
            } else if (arr[mid] == 1)
                mid++;

            else {
                swap(arr, mid, high);
                high--;
            }
        }

        System.out.println("The sorted array is : ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + "");
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = { 2, 0, 1 };

        runOptimal(arr);
    }
}
