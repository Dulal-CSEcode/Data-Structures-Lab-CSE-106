import java.util.Scanner;

public class math {
    public static void main(String[] args){
        //Start math cls here!!!
        //System.out.println("Enter Your numbers :");
        // double a = 4.37;
        // double b = -10;
        // double z = Math.max(a, b);
        // double z = Math.min(a, b);
        // double z = Math.round(a);
        // double z = Math.ceil(a);
        // double z = Math.floor(a);
        // double z = Math.sqrt(a);
        // double z = Math.abs( b);
        // System.out.println(z);

        //Find the hypotenuse of a triangle??

        double x, y, z;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the value of x :");
        x = input.nextDouble();
        System.out.println("Enter the value of y :");
        y = input.nextDouble();
        z = Math.sqrt((x * x) + (y * y));
        input.close();
        System.out.println("The value of hypotenuse is "+z);

       
        
    }
}
