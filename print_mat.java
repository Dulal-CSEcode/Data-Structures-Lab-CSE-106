public class print_mat {
    public static void main(String[] args) {
        int n =834;
        int rem;
        while (n != 0) {
            rem = n % 10;
            n /= 10;
            System.out.print(rem);
        }
    }
}
