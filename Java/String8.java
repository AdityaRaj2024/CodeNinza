
//WAP in java to input any String after that search any particular character in that String.
package mypack;
import java.util.*;

class String8 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String str;
        char c;
        int i;
        System.out.print("Enter Any String = ");
        str = sc.nextLine();
        System.out.print("Enter Any Character = ");
        c = sc.next().charAt(0);
        for (i = 0; i < str.length(); i++) {
            if (c == str.charAt(i))
                break;
        }
        System.out.println(c + " is found at " + (i + 1) + " position.");
    }
}