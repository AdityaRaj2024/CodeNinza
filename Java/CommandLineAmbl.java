/*
	This is Command Line program in JAVA for Checking whether 2 numbers are Amicable or not - in Command Line Argument.
    14/04/2023
*/
package mypack;
public class CommandLineAmbl
{
    public static void main(String args[])
    {
        if(args.length>1)
        {
        int a,b,i,r,s1=0,s2=0;
        a=Integer.parseInt(args[0]);
        b=Integer.parseInt(args[1]);
        for(i=1;i<=a/2;i++)
        {
            if(a%i==0)
                s1=s1+i;
        }
        for(i=1;i<=b/2;i++)
        {
            if(b%i==0)
                s2=s2+i;
        }
        if(a==s2 && b==s1)
            System.out.print(a+" and "+b+" are amicable numbers.");
        else
            System.out.print(a+" and "+b+" are not amicable numbers.");
        }
        else
            System.out.print("Please Pass Two Argument.");
    }
}