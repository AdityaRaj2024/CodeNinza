
//WAP in java to input five strings after that print each string in reverse order.
package mypack;
import java.util.Scanner;

class StringRev {
    Scanner sc = new Scanner(System.in);
    int n, i;
    String rev;

    StringRev() {
        System.out.print("Enter Number of String :-  ");
        n = sc.nextInt();
        String str[] = new String[n];
        System.out.println("Enter " + n + " String = ");
        for (i = 0; i < n; i++) {
            str[i] = sc.next();
        }
        System.out.println("Each String :- ");
        for (i = 0; i < str.length; i++) {
            System.out.println(str[i]);
        }
        System.out.println("Each String in Reverse Order:- ");
        for (i = 0; i < str.length; i++) {
            rev = "";
            for (int j = str[i].length() - 1; j >= 0; j--) {
                rev = rev + str[i].charAt(j);
            }
            System.out.println(rev);
        }
    }
}

class String12 {
    public static void main(String[] args) {
        StringRev obj = new StringRev();
    }
}
