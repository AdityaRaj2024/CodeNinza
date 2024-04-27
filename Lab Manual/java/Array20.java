
// 20. WAP in java to input five matrix after that find sum of elements for each matrix.
import java.util.Scanner;

public class Array20 {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int n, r, c;
        System.out.print("Enter Number of Matrix :- ");
        n = inp.nextInt();
        System.out.println("Enter Row and Column Size :-");
        r = inp.nextInt();
        c = inp.nextInt();
        int a[][][] = new int[n][r][c];
        int f, i, j, sum;
        for (f = 0; f < n; f++) {
            System.out.println("Enter Elements of " + (f + 1) + " :- ");
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++)
                    a[f][i][j] = inp.nextInt();
            }
        }
        System.out.println("All Matrixes Are :- ");
        for (f = 0; f < n; f++) {
            sum = 0;
            System.out.println("Matrix " + (f + 1) + " is :- ");
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    System.out.print(a[f][i][j] + "\t");
                    sum += a[f][i][j];
                }
                System.out.println();
            }
            System.out.println("Sum of Elements of Matrix " + (f + 1) + " is :- " + sum);
        }
    }
}
