
//WAP in java to input any String after that remove vowel characters.
package mypack;
import java.util.Scanner;

class String11 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str;
        int i;
        char ch;
        System.out.print("Enter Any String :- ");
        str = sc.nextLine();
        for (i = 0; i < str.length(); i++) {
            ch = str.charAt(i);
            if ((ch == 'a') || (ch == 'A') || (ch == 'e') || (ch == 'E') || (ch == 'i') || (ch == 'I') || (ch == 'o')
                    || (ch == 'O') || (ch == 'u') || (ch == 'U')) {
                continue;
            } else
                System.out.print(ch);
        }
    }
}