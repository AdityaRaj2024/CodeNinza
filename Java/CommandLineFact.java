/*
	This is Command Line program in JAVA for printing Factorial of any number - in Command Line Argument.
    12/04/2023
*/
package mypack;
public class CommandLineFact
{
    public static void main(String [] args)
    {
        int a,i,fact=1;
        //System.out.println("Factorial of "+args[0]+" :- ");
        a=Integer.parseInt(args[0]);
        for(i=1;i<=a;i++)
        {
            fact=fact*i;
        }
        System.out.println("Factorial of "+args[0]+" :-  "+fact);
        //System.out.printf("Factorial of %d is %d",args[0],fact);
    }
}