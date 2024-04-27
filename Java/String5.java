//WAP in java to design a class as named palindrome. Input any string using constructor after that check string is palindrome or not.
package mypack;
import java.util.Scanner;
class Palindrome
{
    String str,rev;
    int i;
    Scanner sc = new Scanner(System.in);
    Palindrome()
    {
        System.out.println("Enter Any String :- ");
        str=sc.next();
    }
    void getReverse()
    {
        rev="";
        for(i=str.length()-1;i>=0;i--)
        {
            rev=rev+str.charAt(i);
        }
        if(str.equals(rev))
        {
            System.out.println("Palimdrome.");
        }
        else
            System.out.println("Not Palimdrome.");
    }
    
}
class String5
{
    public static void main(String args[])
    {
        Palindrome obj = new Palindrome();
        obj.getReverse();
    }
}