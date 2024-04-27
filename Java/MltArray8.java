// 18. WAP in java to input two matix after that find multiplication.
package mypack;
import java.util.Scanner;
class MltArray8 {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int r1, c1, r2, c2;
        System.out.println("Enter Row and Column Size for matrix 1:-");
        r1 = inp.nextInt();
        c1 = inp.nextInt();
        System.out.println("Enter Row and Column Size for matrix 2:-");
        r2 = inp.nextInt();
        c2 = inp.nextInt();
        int a[][] = new int[r1][c1];
        int b[][] = new int[r2][c2];
        int mult[][] = new int[r1][c2];
        int i, j, k;
        if (c1 == r2) {
            System.out.println("Enter Elements in First Array :- ");
            for (i = 0; i < r1; i++) {
                for (j = 0; j < c1; j++)
                    a[i][j] = inp.nextInt();
            }
            System.out.println("Enter Elements in Second Array :- ");
            for (i = 0; i < r2; i++) {
                for (j = 0; j < c2; j++)
                    b[i][j] = inp.nextInt();
            }
            // for multiplication
            for (i = 0; i < r1; i++) {
                for (j = 0; j < c2; j++) {
                    mult[i][j] = 0;
                    for (k = 0; k < c1; k++) {
                        mult[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            System.out.println("Multiplication of both matrix = ");
            for (i = 0; i < r1; i++) {
                for (j = 0; j < c2; j++)
                    System.out.print(mult[i][j] + "\t");
                System.out.println();
            }
        } else {
            System.out.println("Multiplication not possible");
        }
    }
}
