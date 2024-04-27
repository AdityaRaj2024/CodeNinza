
// 16. WAP in java to input any square matrix after that find sum of top,bottom,left and right line elements of matrix
import java.util.Scanner;

class Array16 {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int r, c;
        System.out.println("Enter Row and Column Size :-");
        r = inp.nextInt();
        c = inp.nextInt();
        int arr[][] = new int[r][c];
        int i, j, smb = 0, smt = 0, sml = 0, smr = 0, smd = 0;
        System.out.println("Enter Elements in Array :- ");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++)
                arr[i][j] = inp.nextInt();
        }
        System.out.println("Array Elements Are :- ");
        for (i = 0; i < arr.length; i++) {
            for (j = 0; j < arr[i].length; j++)
                System.out.print(arr[i][j] + "\t");
            System.out.println();
        }
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                if (i == 0)
                    smt = smt + arr[i][j];
                if (i == r - 1)
                    smb = smb + arr[i][j];
                if (j == 0)
                    sml = sml + arr[i][j];
                if (j == c - 1)
                    smr = smr + arr[i][j];
                if (i == j)
                    smd = smd + arr[i][j];
            }
        }
        System.out.println("Sum of Top line elements :- " + smt);
        System.out.println("Sum of Bottom line elements :- " + smb);
        System.out.println("Sum of Left line elements :- " + sml);
        System.out.println("Sum of Right line elements :- " + smr);
        System.out.println("Sum of Diagonal line elements :- " + smd);
    }
}
