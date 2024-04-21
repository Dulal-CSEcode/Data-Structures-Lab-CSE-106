import java.util.Scanner;

/**
 * function_method
 */
public class function_method {

    public static void main(String[] args) {
        System.out.println("Program Start:");
        sayhi();
        int sum = add(44, 8);
        System.out.println("Sum of =" + sum);
        checkEO();
    }

    static int add(int a, int b) {
        int sum = a + b;
        return sum;
    }

    static void sayhi() {
        System.out.println("Hi");
    }

    static void checkEO() {
        Scanner s=new Scanner(System.in);
        System.out.print("Enter number:");
        int n;
        n = s.nextInt();
        if (n % 2 == 0) {
            System.out.println("Even");
        } else {
            System.out.println("Odd");
        }
        s.close();
    }
}