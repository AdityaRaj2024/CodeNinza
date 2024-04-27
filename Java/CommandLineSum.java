/*
    This is Command Line program in JAVA for Finding sum, count of entered digits - in Command Line Argument.
    14/04/2023
*/
package mypack;
public class CommandLineSum
{
    public static void main(String strg[])
    {
        if(strg.length>0)
        {
            int a,c=0,s=0,n,r;
            a=Integer.parseInt(strg[0]);
            //to find count of digit
            n=a;
            while (a>0)
            {
                r=a%10;
                c++;
                a=a/10;
            }
            System.out.println("Count of Digit of "+n+" is "+c);
            a=n;
            //to find sum of digits
            while(a>0)
            {
                r=a%10;
                s=s+r;
                a=a/10;
            }
            System.out.println("Sum of Digit of "+n+" is "+s);
        }
        else
		{
			System.out.println("No Command Line Argument is Passed");
		}
    }
}