/*
	This is Command Line program in JAVA for Checking whether a number is perfect or not - in Command Line Argument.
    13/04/2023
*/
package mypack;

public class CommandLinePt
{
    public static void main(String args[])
    {
        int a,i,s=0;
        //System.out.println()
        a=Integer.parseInt(args[0]);
        for(i=1;i<=a/2;i++)
        {   
            if(a%i==0)
            {
                s=s+i;
                //System.out.println("Factor of "+a+" is "+i);
             }
        }
        if(a==s)
            System.out.println(a+" is a perfect number.");
        else
            System.out.println(a+" is not a perfect number.");
    }
}