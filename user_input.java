import java.util.Scanner;

public class user_input {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        double n;
        System.out.println("Enter the value of n:");
        n = s.nextDouble();
        // s.nextlong
        // s.nextDouble
        System.out.println("The Value of x =" + n);
        // String n = s.next();
        // // string input work s.next just one word and s.nextLine work upto line.

        // System.out.println("The Value of x =" + n);
        s.close();
    }
}
