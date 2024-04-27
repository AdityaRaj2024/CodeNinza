/*
    21-04-2023
    WAP in JAVA to input your name , After that print each character in new line during one second intervel time.Implement nested try block.
    Exception
    a)StringIndexOutOfBoundsException
    b)InterruptedException
    c)NullPointerException
*/
package pack;
// import java.util.Scanner;
import java.util.*;
class NestedTry 
{
    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        String nm;
        // String nm = "Aditya";
        System.out.print("Enter your name :- ");
        nm = sc.next();
        // String nm=null; //genrate NullPointerException
        int i;
        try 
        {
            // for (i = 0; i <= nm.length(); i++) // genrete StringIndexOutOfBoundsException
            for (i = 0; i < nm.length(); i++) 
            {
                System.out.println(nm.charAt(i));
                try 
                {
                    Thread.sleep(1200);
                } 
                catch (InterruptedException e) 
                {}
            }
        } 
        catch (NullPointerException e) 
        {
            System.out.println("String in null." + e);
        } 
        catch (StringIndexOutOfBoundsException e) 
        {
            System.out.println("Invalid Index position." + e);
        } 
        catch (Exception e) 
        {
            System.out.println(e);
        } 
        finally 
        {
            System.out.println("Thanks for joining with us");
        }
    }
}