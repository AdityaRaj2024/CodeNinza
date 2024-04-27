/*
	This is Command Line program in JAVA for printing multiple arguments at a time.
*/
package mypack;
public class CommandLine1
{
	public static void main(String args[])
	{
		if(args.length>0) // Checking if length of argsarray is greater than 0
		{
			for(String s : args) //using for-each loop
            //for(int i=0;i<args.length;i++)
			{
			//System.out.println(s); //to print line by line
			System.out.print(s+"\t"); //to print in a same 
            //System.out.print(args+"\t"); //to print in a same line
			}
		}
		else
		{
			System.out.println("No Command Line Argument is Passed");
		}
	}
}