/*
	This is Command Line program in JAVA for Checking whether a number is ArmStrong or not - in Command Line Argument.
    14/04/2023
*/
package mypack;
//import java.lang.math;
public class CommandLineArm
{
    public static void main(String args[])
    {
        int a,c=0,r,n;
        double s=0;
        a=Integer.parseInt(args[0]);
        //to find count of digit
        n=a;
        for(;a>0;)
        {
            r=a%10;
            c++;
            a=a/10;
        }
        System.out.println("Count of "+n+" is "+c);
        a=n;
        for(;a>0;)
        {
            r=a%10;
            s=s+Math.pow(r,c);
            a/=10;
        }
        if(n==s)
            System.out.println(n+" is an armstrong number.");
        else
            System.out.println(n+" is not an armstrong number.");
    }
}