/*
	This is Command Line program in JAVA for Checking whether a number is Palindrome or not - in Command Line Argument.
    14/04/2023
*/
package mypack;
public class CommandLineRev
{
    public static void main(String args[])
    {
        int a,r,rev=0,n;
        a=Integer.parseInt(args[0]);
        n=a;
        //for(;a>0;)
        while(a>0)
        {
            r=a%10;
            rev=rev*10+r;
            a=a/10;
        }
        System.out.println("Reverse of "+n+" is "+rev);
        if(n==rev)
            System.out.println(n+" is a palindrome number.");
        else
            System.out.println(n+" is not a palindrome number.");
    }
}