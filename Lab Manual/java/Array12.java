
// 12. WAP in java to input 10 numbers after that sort data in ascending order
import java.util.Scanner;

class Array12 {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int s;
        System.out.print("Enter Array Size = ");
        s = inp.nextInt();
        int[] ary = new int[s];
        int i, j, t;
        System.out.println("Enter Elements in Array = ");
        for (i = 0; i < s; i++) {
            ary[i] = inp.nextInt();
        }
        for (i = 0; i < s; i++) {
            for (j = i; j < s; j++) {
                if (ary[i] > ary[j]) {
                    t = ary[i];
                    ary[i] = ary[j];
                    ary[j] = t;
                }
            }
        }
        System.out.println("Sorted Array in Ascending Order :- ");
        for (i = 0; i < s; i++) {
            System.out.print(ary[i] + "\t");
        }
        System.out.println("\nSorted Array in Descending Order :- ");
        for (i = s - 1; i >= 0; i--) {
            System.out.print(ary[i] + "\t");
        }
    }
}
