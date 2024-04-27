
/*
    WAP in java to implement console class
*/
package mypack;
import java.io.*;
class Console1 
{
    public static void main(String args[]) 
    {
        Console c = System.console();
        // if (c == null)
            // System.out.println("No Console Available");
        String nm;
        int id;
        System.out.println("Enter your name and id = ");
        nm = c.readLine();
        id = Integer.parseInt(c.readLine());
        System.out.println("Name :- " + nm);
        System.out.println("ID :- " + id);
    }
}