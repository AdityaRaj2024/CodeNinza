/*
    this program is to perform arithmetic operation implementing exception handling tools
    20-04-2023
*/
package pack;
import java.io.*;
class ArithmeticExp1
{
    public static void main(String args[])
    {
        int a,b,add,sub,multi,div,mod;
        DataInputStream ds = new DataInputStream(System.in);
        try
        {
            System.out.println("Enter Two Number's :- ");
            a=Integer.parseInt(ds.readLine());
            b=Integer.parseInt(ds.readLine());
            add=a+b;
            sub=a-b;
            multi=a*b;
            div=a/b;
            mod=a%b;
            System.out.println("Addition = "+add+"\nSubtraction = "+sub+"\nMultiplication = "+multi+"\nDivision = "+div+"\nRemainder :- "+mod);
        }
        catch(ArithmeticException e)
        {
            //System.out.println("Error ! You are dividing by zero."+e.getMessage);
            System.out.println("Error ! You are dividing by zero."+e);
        }
        catch(NumberFormatException e)
        {
            System.out.println("Error ! Invalid Input."+e);
        }
        catch(IOException e)
        {   }
        catch(Exception e)
        {
            System.out.println("Error !"+e);
        }
        finally
        {
            System.out.println("Thanks");
        }
    }
}