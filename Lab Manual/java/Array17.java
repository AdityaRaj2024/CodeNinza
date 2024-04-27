
//WAP in java to input two matix after that find addition and subtraction
import java.util.Scanner;

class Array17 {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int r, c;
        System.out.println("Enter Row and Column Size :-");
        r = inp.nextInt();
        c = inp.nextInt();
        int a[][] = new int[r][c];
        int b[][] = new int[r][c];
        int sm[][] = new int[r][c];
        int sb[][] = new int[r][c];
        int i, j;
        System.out.println("Enter Elements in First Array :- ");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++)
                a[i][j] = inp.nextInt();
        }
        System.out.println("Enter Elements in Second Array :- ");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++)
                b[i][j] = inp.nextInt();
        }
        // for addition
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++)
                sm[i][j] = a[i][j] + b[i][j];
        }
        // for subtraction
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++)
                sb[i][j] = a[i][j] - b[i][j];
        }
        System.out.println("Addition of both matrix = ");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++)
                System.out.print(sm[i][j] + "\t");
            System.out.println();
        }
        System.out.println("Subtraction of both matrix = ");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++)
                System.out.print(sb[i][j] + "\t");
            System.out.println();
        }
    }
}
