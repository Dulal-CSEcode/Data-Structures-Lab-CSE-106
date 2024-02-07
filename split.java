public class split {
    public static void main(String[] args) {
        String s = "I#Love#Bangladesh";
        String[] a = s.split("#+");//Back slash ke " "or \s or\\s evabe lekha jay
        for (int index = 0; index < a.length; index++) {
            System.out.println(a[index]);
        }
    }
}
