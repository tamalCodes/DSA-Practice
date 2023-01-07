package Code;

import java.util.Scanner;

public class Day3 {

    public static void Armstrong(int n) {
        int a, sum = 0, temp = n;
        while (n > 0) {

            a = n % 10;
            sum += (a * a * a);

            n = n / 10;
        }

        if (temp == sum)
            System.out.println("Armstrong number");
        else
            System.out.println("Not an armstrong number");

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number : ");
        int n = sc.nextInt();
        Armstrong(n);
    }
}
