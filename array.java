public class array {
    public static void main(String[] args) {
        //  int arr[] = new int[5];//a=new int [5]
        // int arr[] = { 7, 8, 4, 2, 6 };
        // for (int i = 0; i < arr.length; i++) {
        //     System.out.print(" "+arr[i]);
        // }
        //2 D Array
            int arr[][]={
                {1,3,5},
                {2,4,6},
                {9,3,1}
            };
            for (int i = 0; i < arr.length; i++) {
                for (int j = 0; j < arr.length; j++) {
                    System.out.print(arr[i][j] + " ");
                }
                System.out.println();
            }
    }
}
 