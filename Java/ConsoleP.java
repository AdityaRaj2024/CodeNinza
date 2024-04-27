
/*
    WAP in java to implement console class to read password
*/
package mypack;

import java.io.*;

class ConsoleP 
{
    public static void main(String args[]) 
    {
        Console c = System.console();
        String nm, pass;
        System.out.print("Enter your Name = ");
        nm = c.readLine();
        System.out.print("Enter your Password = ");
        char[] ch = c.readPassword(); // password doesnot display on console
        //char[] ch = c.readPassword(pass); // password display on console
        pass = String.valueOf(ch);
        System.out.println("\nDetails");
        System.out.println("Name :- " + nm);
        System.out.println("Password :- " + pass);
    }
}