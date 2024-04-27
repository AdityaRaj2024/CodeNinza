/*
    25-04-2023
    throws Keyword :- 
    1)It is used to declare one or more exceptions.
    2)It is mostly used to handle checcked exceptions/ compile time exceptions.
    3)It is always used with method signature.
    4)It must be followed with class.
    Syntax:-
        <return type><method name>([Parameter list])throws exception1, exception 2,.........
        {
            block of statements;
            [return(variable)];
        }
*/
//WAP in JAVA to input your name after that print each character in reverse order during one second intervel time. Implement 'throws' keeyword.

package pack;
import java.io.*;
class MyThrows
{
    public static void main(String args[])throws IOException ,InterruptedException
    {
        DataInputStream ds = new DataInputStream(System.in);
        String nm;
        System.out.print("Enter Your Name :- ");
        nm=ds.readLine();
        System.out.println("All CHaracters in reverse order :- ");
        for(int i=nm.length()-1;i>=0;i--)
        {
            System.out.println(nm.charAt(i));
            Thread.sleep(1000);
        }
    }
}