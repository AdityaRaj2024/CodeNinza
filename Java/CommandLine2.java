/*
	This is Command Line program in JAVA for adding 2 numbers.
*/
package mypack;
public class CommandLine2
{
	public static void main(String args[])
	{
		int a,b,c;
		if(args.length>0) // Checking if length of argsarray is greater than 0
		{
			a=Integer.parseInt(args[0]);
			b=Integer.parseInt(args[1]);
			//a=(args[0]);
			//b=(args[1]);
			c=a+b;
			//System.out.println("Added Number is "+c);
			System.out.println("The Sum of  "+a+" and "+b+" is "+c);
		}
		else
		{
			System.out.println("No Command Line Argument is Passed");
		}
	}
}