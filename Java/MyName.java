/*
    WAP in java to create a thread for printing each character of our name during 1 second intervel time using Runnable interface.
    01-05-2023
*/
package pack;
import java.io.*;
class MyName implements Runnable
{
    String nm;
    int i;
    DataInputStream ds = new DataInputStream(System.in);
    MyName() throws IOException
    {
        System.out.println("Enter Your Name = ");
        nm=ds.readLine();
    }
    public void run()
    {
        try
        {
            for(i=0;i<nm.length();i++)
            {
                System.out.println(nm.charAt(i));
                Thread.sleep(1100);
            }
        }
        catch(InterruptedException e)
        {
            
        }
        catch(StringIndexOutOfBoundsException e)
        {
            System.out.println("Invalid Index");
        }
    }
    public static void main(String[] args) throws IOException
    {
        MyName obj = new MyName();
        Thread t = new Thread(obj);
        t.start();
    }
}