/*
    WAP in java to print natural number from 1 to 10 using runnable interafce.
*/
package pack;
class NrlThread implements Runnable
{
    int i;
    public void run()
    {
        for(i=1;i<=10;i++)
        {
            try
            {
                System.out.println(i);
                Thread.sleep(1000);
            }
            catch(InterruptedException e)
            {}
        }
    }
    public static void main(String[] args) 
    {
        NrlThread tr = new NrlThread();
        Thread t = new Thread(tr);
        t.start();
     }
}