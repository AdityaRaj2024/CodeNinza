/*
	This is Command Line program in JAVA for printing Factor of any number- in Command Line Argument.
    12/04/2023
*/
package mypack;
public class CommandLineF
{
	public static void main(String args[])
	{
        int a,i;
        //System.out.println("Factor of "+args[0]+":-");
         a=Integer.parseInt(args[0]);
        for(i=1;i<=a;i++)
        {   
            //a=Integer.parseInt(args[0]);
            if(a%i==0)
            {
                System.out.println("Factor of "+a+" is "+i);
             }
        }
    }
}