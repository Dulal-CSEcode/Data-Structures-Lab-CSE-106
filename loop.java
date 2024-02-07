import java.util.Scanner;

public class loop {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // String name = "";
        // while (name.isBlank()) {
        // System.out.println("Enter your name :");
        // name = input.nextLine();
        // }
        // System.out.println("Hello "+ name);
        String name ="";
        do {
            System.out.println("Enter your name :");
            name = input.nextLine();
        } while (name.isBlank());
        System.out.println("Hello! " + name);
        input.close();
    }
}
