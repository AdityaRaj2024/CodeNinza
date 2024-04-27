/*
	This is Command Line program in JAVA for adding all the inputted numbers - through Command Line Argument.
    12/04/2023
*/
package mypack;
public class CommandLineSm
{
    public static void main(String args[])
    {
        if(args.length>0)
        {
            int s=0,i;
            //System.out.println("Sum of All Number's Are :-");
            for(i=0;i<args.length;i++)
            {
                s=s+Integer.parseInt(args[i]);
            }
            System.out.println("Sum of "+args.length+" Numbers are :-  "+s);
        }
        else
		{
			System.out.println("No Command Line Argument is Passed");
		}
    }
}