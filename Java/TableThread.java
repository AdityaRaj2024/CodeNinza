/*
    WAP in java to create a thread for printing table of any number during 1 second intervel time using Thread class.
    01-05-2023
*/
package pack;
import java.util.*;
class TableThread extends Thread
{
    int n,i;
    Scanner sc = new Scanner(System.in);
    TableThread()
    {
        System.out.print("Enter Any Number = ");
        n=sc.nextInt();
    }
    public void run()
    {
        try
        {
            for(i=1;i<=10;i++)
            {
                System.out.println(n+" X "+i+" = "+(n*i));
                Thread.sleep(1000);  
            }
        }
         catch(InterruptedException e)
         {}
    }
    public static void main(String[] args)
    {
        TableThread t = new TableThread();
        t.start();//executes thread
    }
}