package Code;

import java.util.Scanner;

public class Day2_array {

    public static int max(int[] arr) {
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }

    public static void Fibonacci(int range) {

        int a = 0, b = 1;
        System.out.println(a);
        System.out.println(b);

        for (int i = 2; i < range; i++) {

            int sum = a + b;
            System.out.println(sum);
            a = b;
            b = sum;

        }
    }

    public static void Calculator(char operation) {

        Scanner sc = new Scanner(System.in);
        int a, b;

        switch (operation) {
            case 'a':
                System.out.println("Enter 2 digits");
                a = sc.nextInt();
                b = sc.nextInt();

                System.out.println("The sum is : " + (a + b));
                break;

            case 's':
                System.out.println("Enter 2 digits");
                a = sc.nextInt();
                b = sc.nextInt();

                System.out.println("The difference is : " + (a - b));
                break;

            case 'm':
                System.out.println("Enter 2 digits");
                a = sc.nextInt();
                b = sc.nextInt();

                System.out.println("The product is : " + (a * b));
                break;

            case 'd':
                System.out.println("Enter 2 digits");
                a = sc.nextInt();
                b = sc.nextInt();

                System.out.println("The answer is : " + (a / b));
                break;

            default:
                break;
        }
    }

    public static boolean Linear(int n, int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == n)
                return true;
        }

        return false;
    }

    public static void Minimum(int[] arr) {

        int count = 0;
        String s;

        for (int i = 0; i < arr.length; i++) {
            s = String.valueOf(arr[i]);

            if (arr[i] > 0) {

                if (s.length() == 2)
                    count++;
            } else {

                if (s.length() - 1 == 2)
                    count++;
            }
        }

        System.out.println(count);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // * MAX VALUE */

        // System.out.println("Enter the number of elements in the array");
        // int n = sc.nextInt();

        // int[] arr = new int[n];

        // for (int i = 0; i < arr.length; i++) {
        // arr[i] = sc.nextInt();
        // }

        // int maxval = max(arr);
        // System.out.println("The max value is : " + maxval);

        // * FIBONACCI */

        // System.out.println("Enter the range of the Fibonacci : ");
        // int range = sc.nextInt();
        // Fibonacci(range);

        // * CALCULATOR */

        // System.out.println("Enter the operation you want to do");
        // System.out.println("a for Addition");
        // System.out.println("s for Substraction");
        // System.out.println("m for Multiplication");
        // System.out.println("d for Division");

        // char op = sc.next().charAt(0);
        // Calculator(op);

        // * Linear */

        // System.out.println("Enter a 5 digit array");
        // int[] arr = new int[5];

        // for (int i = 0; i < arr.length; i++) {
        // arr[i] = sc.nextInt();
        // }

        // System.out.println("Enter the number you wanna look for : ");
        // int n = sc.nextInt();

        // boolean isFound = Linear(n, arr);
        // System.out.println(isFound);

        // * NUMBER OF EVEN DIGITS IN THE ARRAY */

        System.out.println("Enter a 5 digit array");
        int[] arr = new int[5];

        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }

        Minimum(arr);
    }
}
