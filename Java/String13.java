
//WAP in java to input any string after that print each word in reverse order.
// package mypack;
import java.util.Scanner;

class String13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str;
        int i;
        char ch;
        System.out.println("Enter Any String :- ");
        str = sc.nextLine();
        for (i = str.length(); i > 0; i++) {
            ch = str.charAt(i);
            if (ch.equalsTo(" ")) {
                System.out.println(str[i]);
            }

        }
    }
}