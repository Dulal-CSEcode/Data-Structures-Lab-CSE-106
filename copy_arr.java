import java.util.Arrays;

public class copy_arr {
    public static void main(String[] args) {
        // array copy but any value change to copy element auto change
        // int [] orginal = { 1, 2, 3, 4, 5, 6 };
        // int[] number = orginal;
        // orginal[0] = -5;
        // for (int arr : number) {
        // System.out.print(arr + ",");
        // }

        // int[] arr = { 1, 2, 3, 6, 4, 5 };
        // int n = arr.length;
        // int[] copy = new int[n];
        // for (int i = 0; i < arr.length; i++) {
        // copy[i] = arr[i];

        // }//any arr value change copy element not change this work Arrays.toString
        // technic.//
        // arr[0] = -5;
        //
        // System.out.println("\nUse Array toString copy array:
        // "+Arrays.toString(copy));
        // int[] arr = { 1, 2, 3, 6, 4, 5 };
        // int n = arr.length;
        // int[] copy = new int[n];
        // System.arraycopy(arr, 0, copy, 0, n);
        // System.out.println("\nUse Array toString copy array:"+Arrays.toString(copy));

        // CopyofRange method to copy array to another array ?
        // int[] arr = { 1, 2, 3, 4, 25, 10 };
        // int[] copy = Arrays.copyOfRange(arr, 0, arr.length);
        // System.out.println("copy array is :" + Arrays.toString(copy));
        // int[] copy1 = Arrays.copyOfRange(arr, 3, 6);
        // System.out.println("copy array is :" + Arrays.toString(copy1));

        // 2D Array copys
        int[][] source = {
                { 1, 2, 3, 4 },
                { 5, 6 },
                { 0, 2, 42, -4, 5 }
        };
        int[][] copy = new int[source.length][];
        for (int i = 0; i < copy.length; i++) {
            copy[i] = new int[source[i].length];

            for (int j = 0; j < copy[i].length; j++) {
                copy[i][j] = source[i][j];// copy array
            }

        }
        System.out.print(Arrays.deepToString(copy));

        // print 2d array
        // for (int i = 0; i < copy.length; i++) {
        // for (int j = 0; j < copy[i].length; j++) {
        // System.out.print(copy[i][j]+" ");
        // }
        // System.out.println();
        // }
    }

}
