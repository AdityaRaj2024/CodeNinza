/*
	This is Command Line program in JAVA for Checking whether a number is prime or not - in Command Line Argument.
    13/04/2023
*/
package mypack;

public class CommandLinePr
{
    public static void main(String args[])
    {
        int a,i,c=0;
        //System.out.println()
        a=Integer.parseInt(args[0]);
        for(i=1;i<=a;i++)
        {   
            if(a%i==0)
            {
                c++;
                System.out.println("Factor of "+a+" is "+i);
             }
        }
        if(c==2)
            System.out.println(a+" is a prime number.");
        else
            System.out.println(a+" is not a prime number.");
    }
}