
// 14. WAP in java to input any matrix after that find sum of all elements of matrix
import java.util.Scanner;

public class Array14 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int r, c;
        System.out.println("Enter Row and Column Size :-");
        r = in.nextInt();
        c = in.nextInt();
        int ar[][] = new int[r][c];
        int i, j, sm = 0;
        System.out.println("Enter Elements in Array :- ");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++)
                ar[i][j] = in.nextInt();
        }
        System.out.println("Array Elements Are :- ");
        for (i = 0; i < ar.length; i++) {
            for (j = 0; j < ar[i].length; j++)
                System.out.print(ar[i][j] + "\t");
            System.out.println();
        }

        for (int p[] : ar) {
            for (int q : p)
                sm = sm + q;
        }
        System.out.println("Sum of ALl Array Elements Are :- " + sm);
    }
}
