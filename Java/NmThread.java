
/*
    WAP in java to input your name using constructor after that print each character during one second interval time using thread class.
*/
package pack;
import java.util.*;

class NmThread extends Thread 
{
    String nm;
    int i;
    NmThread() 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Your Name = ");
        nm = sc.nextLine();
    }
    public void run()
    {
        try
        {
            for(i=0;i<nm.length();i++)
            {
                System.out.println(nm.charAt(i));
                Thread.sleep(1000);
            }
        }
        catch(InterruptedException e)
        {}
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
        public static void main(String[] args) 
        {
            NmThread td = new NmThread();
            td.start();
        }
}