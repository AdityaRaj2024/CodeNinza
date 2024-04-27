//WAP in java to input any string after that print each character in new line
package mypack;
import java.util.Scanner;
class String4
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        String s;
        int i;
        System.out.println("Enter Any String :- ");
        s=sc.nextLine();
        for(i=0;i<s.length();i++)
            System.out.println(s.charAt(i));
    }
}