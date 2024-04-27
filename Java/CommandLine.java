/*
	This is first Command Line program in JAVA.
*/
package mypack;
public class CommandLine
{
	public static void main(String args[])
	{
		if(args.length>0) // Checking if length of argsarray is greater than 0
		{
			System.out.println("First Command Line Argument is "+args[0]);
		}
		else
		{
			System.out.println("No Command Line Argument is Passed");
		}
	}
}