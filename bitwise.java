/*
Here, ~ is a bitwise operator. It inverts the value of each bit (0 to 1 and 1 to 0).
The various bitwise operators present in Java are:
Operator			Description	

   ~				Bitwise Complement			
   <<				Left Shift
			
   >>				Right Shift
			
   >>>				Unsigned Right Shift
			
   &				Bitwise AND
			
   ^				Bitwise exclusive OR
 
 */
public class bitwise {
    public static void main(String[] args) {
        int x = 10;
        // ~ actual work 1's and 2's complements?? 
        //00001010
        //11110101->1's complements
        //      +1 ->2's complements
        //--------------
        //11110110   
        bitComplement(x);
        //left shift
        int n = 10;
        leftShift(n);
        //right shift
        rightShift(n);
        //bit wise or ?
        bitWiseOr(5, 4);

    }
    
    static void bitComplement(int a) {
        System.out.println(~a);
    }

    static void leftShift(int a) {
        int left = a << 2;
        // 1010 =10
        // left shift means right dike two bit add
        //1010 00 =40  

        System.out.println(a);
        System.out.println(left);
    }

    static void rightShift(int a) {
        System.out.println(a);
        int right = a >> 2;
        // 1010 =10
        //  right shift means  dike two bit add
        //1010 00 =40 
        System.out.println(right);
    }

    static void bitWiseOr(int a, int b) {
        int result = a ^ b;
        // a=4->100
        //b=5-> 101
        //-----001
        System.out.println("The Bitwise Or operations is :" + result);
        int and = a & b;
        System.out.println("Bitwise and is :" + and);
    }
}
