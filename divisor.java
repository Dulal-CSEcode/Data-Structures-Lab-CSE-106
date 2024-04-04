public class divisor {
    public static void main(String[] args) {
        divi(15);
    }

    static void divi(int x) {
        for (int i = 1; i <= x; i++) {
            if (x % i == 0) {
                System.out.println(i);
            }
        }

    }
}
