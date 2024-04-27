
// 11. WAP in java to input 10 numbers after that search any particular value.
import java.util.Scanner;

class Array11 {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int s;
        System.out.print("Enter Array Size = ");
        s = inp.nextInt();
        int[] ary = new int[s];
        int i, se, c = 0;
        System.out.println("Enter Elements in Array = ");
        for (i = 0; i < s; i++) {
            ary[i] = inp.nextInt();
        }
        System.out.print("Enter Elements to search :- ");
        se = inp.nextInt();
        for (i = 0; i < s; i++) {
            if (ary[i] == se)
                c++;
        }
        if (c >= 1)
            System.out.println(se + " is found " + c + " times.");
        else
            System.out.println(se + " is not found.");
    }
}
