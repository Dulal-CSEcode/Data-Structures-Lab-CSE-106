import java.util.Scanner;

public class practisce_all_lecture {
    public static void main(String[] args) {
        System.out.println("Hello This my First program");
        // just to numbers sum is:
        sum(20, 35);
        // int []a = new int[6];
        // a[0] = 7;
        // a[5] = 9;
        // System.out.println(a[0] + a[5]);
        // array initialization is:
        System.out.println("Array is :");
        int arr[] = { 8, 9, 4, 2, 5, 7 };
        array(arr);
        System.out.print("\n");
        // 2D array declearation is:
        int array[][] = { { 1, 2, 3 },
                { 2, 4, 6 },
                { 9, 7, 8 } };
        System.out.println("2D Array is :");
        twoD(array);
        //check vowel or consonant
        System.out.println("Check Vowel or Consonant :");
        char key = 'k';
        check_V_c(key);

        // Swap two number  user input at a time ?
        int x, y;
        Scanner input = new Scanner(System.in);
        x = input.nextInt();
        y = input.nextInt();
      
        System.out.println("Swap two number :");
        swap(x, y);
        //Divisor is 
        divisor(x);
        //String 
        String str = "Hi My name is ";      
      
        System.out.println("\nWhat is your name?");
        input.nextLine();
        String name = input.nextLine();
        string(str, name);
        input.close();

    }

    static void string(String str ,String name) {
        System.out.println("\nString work here :");  
        System.out.println(str + name);
    }
    

    static void divisor(int a) {
        System.out.println("Divisor is here:");
        for(int i=1;i<=a;i++)
        if(a%i==0)
            System.out.print(" "+i);
    }
    static void check_V_c(char ch) {
       
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I'
                || ch == 'O' || ch == 'U') {
            System.out.println("Vowel");
        } else {
            System.out.println("Consonant");
        }
    }

    static void swap(int a, int b) {
        System.out.println("Before Swap two number :");
        System.out.println("X is :" + a);
        System.out.println("Y is :" + b);
        int temp = a;
        a = b;
        b = temp;
        System.out.println("After Swap two number :");
        System.out.println("X is :" + a);
        System.out.println("Y is :" + b);
    }

    static void twoD(int array[][]) {
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array.length; j++) {
                System.out.print(" " + array[i][j]);
            }
            System.out.print("\n");
        }

    }

    static void sum(int a, int b) {
        System.out.println("My Number is: " + a);
        System.out.println("My Number is: " + b);
        int sum = a + b;
        System.out.println("Sum is :" + sum);
    }

    static void array(int a[]) {
        for (int i = 0; i < a.length; i++) {
            System.out.print(" " + a[i]);
        }

    }
}
