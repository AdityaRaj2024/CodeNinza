
//WAP in java to input any String after that count the frequency of each charcter in that string.
// package mypack;
import java.util.Scanner;

class String10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str;
        int i, j;
        System.out.print("Enter Any String :- ");
        str = sc.nextLine();
        char ch[] = str.toCharArray();
        int c[] = new int[str.length()];
        for (i = 0; i < str.length(); i++) {
            c[i] = 1;
            for (j = i + 1; j < str.length(); j++) {
                if (ch[i] == ch[j]) {
                    c[i]++;
                    ch[j] = '0';
                }
            }
        }
        System.out.println("Frequency of Each Character :- ");
        for (i = 0; i < c.length; i++) {
            if (ch[i] != ' ' && ch[i] != '0')
                System.out.println(ch[i] + " :- " + c[i]);
        }
    }
}