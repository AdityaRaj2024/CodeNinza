/*
	This is Command Line program in JAVA for Checking whether a number is Strong or not - in Command Line Argument.
    14/04/2023
*/
package mypack;
public class CommandLineStr
{
    public static void main(String args[])
    {
        int a,n,f,r,i,s=0;
        a=Integer.parseInt(args[0]);
        n=a;
        while(a>0)
        {
            f=1;
            r=a%10;
            for(i=1;i<=r;i++)
            {
                f=f*i;
            }
            s=s+f;
            a/=10;
        }
        if(n==s)
            System.out.println(n+" is a Strong number.");
        else
            System.out.println(n+" is not a Strong number.");
    }
}