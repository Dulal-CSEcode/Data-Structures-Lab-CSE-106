public class swtich {
    public static void main(String[] args) {
        int n = 27;
        int x = n % 2;
        switch (x) {
            case 0:
                System.out.println("This number is even");
                break;
            case 1:
                System.out.println("This number is odd");
                break;
            default:
                System.out.println("This is not a numbers");
                break;
        }
    }
}
