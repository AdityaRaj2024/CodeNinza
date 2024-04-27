
// 10. WAP in java to input 10 numbers after that find greatest and smallest number.
import java.util.Scanner;

class Array10 {
    public static void main(String[] arg) {
        Scanner inp = new Scanner(System.in);
        int s, i, gt, sm;
        System.out.print("Enter Array Size = ");
        s = inp.nextInt();
        int[] ary = new int[s];
        System.out.println("Enter Elements in Array = ");
        // for (int n : ary) {
        // ary[n] = inp.nextInt();
        // }
        for (i = 0; i < s; i++) {
            ary[i] = inp.nextInt();
        }
        gt = sm = ary[0];
        // for (int n : ary) {
        for (i = 0; i < ary.length; i++) {
            if (gt < ary[i])
                gt = ary[i];
            if (sm > ary[i])
                sm = ary[i];
        }
        System.out.println("Greatest Element : - " + gt);
        System.out.println("Smallest Element : - " + sm);
    }
}
