/*
	This is Command Line program in JAVA for printing fibonacci series - in Command Line Argument.
    13/04/2023
*/
package mypack;
public class CommandLineFbs
{
    public static void main(String args[])
    {
        int a=0,b=1,c,i,d;
        //a=0;
        //b=1;
        c=Integer.parseInt(args[0]);
        for(i=1;i<=c;i++)
        {
            //System.out.print(a+"\t");
            System.out.println(a);
            d=a+b;
            //System.out.println(c+"\t");
            a=b;
            b=d;
            //System.out.print(c+"\t");
        }
    }
    
    
}