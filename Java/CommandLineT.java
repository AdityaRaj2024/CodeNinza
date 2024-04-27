/*
	This is Command Line program in JAVA for printing Table of any number - in Command Line Argument.
    11/04/2023
*/
package mypack;
public class CommandLineT
{
	public static void main(String args[])
	{
		int a=0,i;
		System.out.println("Table of "+args[0]+" are as follows :-");
        a=Integer.parseInt(args[0]);
		for(i=1;i<=10;i++)
		{
			System.out.println(a+" X "+i+" = "+a*i);
		}
	}
}