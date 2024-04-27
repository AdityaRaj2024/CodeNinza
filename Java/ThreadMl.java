//creating multiple thread
//09-05-2023
package pack;
class ThreadOne extends Thread
{
    public void run()
    {
        try
        {
            for(char ch='A';ch<='G';ch++)
            {
                System.out.println(ch);
                Thread.sleep(900);
            }
        }
        catch(InterruptedException e)
        {}
    }
}
class ThreadTwo extends Thread
{
    public void run()
    {
        try
        {
            for(char ch='a';ch<='g';ch++)
            {
                System.out.println(ch);
                Thread.sleep(900);
            }
        }
        catch(InterruptedException e)
        {}
    }
}
class ThreadThree extends Thread
{
    public void run()
    {
        try
        {
            for(int i=1;i<=7;i++)
            {
                System.out.println(i);
                Thread.sleep(900);
            }
        }
        catch(InterruptedException e)
        {}
    }
}
class ThreadMl
{
    public static void main(String arg[])
    {
        ThreadOne t1=new ThreadOne();
        ThreadTwo t2=new ThreadTwo();
        ThreadThree t3=new ThreadThree();
        t1.start(); //it will execute randomly
        t2.start(); //it will execute randomly
        t3.start(); //it will execute randomly
        System.out.println("Name of main Thread = "+Thread.currentThread());
        System.out.println("Only Name of main Thread = "+Thread.currentThread().getName());
        System.out.println("Priority value of main Thread = "+Thread.currentThread().getPriority());
        System.out.println("Default Name of main Thread One = "+t1.getName());
        System.out.println("Default Name of main Thread One = "+t2.getName());
        System.out.println("Default Name of main Thread One = "+t3.getName());
        t1.setName("Aditya");
        t2.setName("Rohit");
        t3.setName("Surya");
        System.out.println("New Name of main Thread One = "+t1.getName());
        System.out.println("New Name of main Thread One = "+t2.getName());
        System.out.println("New Name of main Thread One = "+t3.getName());
        System.out.println("Default Priority value of ThreadOne = "+t1.getPriority());
        System.out.println("Default Priority value of ThreadTwo = "+t2.getPriority());
        System.out.println("Default Priority value of ThreadThree = "+t3.getPriority());
        t1.setPriority(Thread.MAX_PRIORITY);
        // t1.setPriority(10);
        t2.setPriority(7);
        //t3.setPriority(Thread.MIN_PRIORITY);
        t3.setPriority(1);
        System.out.println("New Priority value of ThreadOne = "+t1.getPriority());
        System.out.println("New Priority value of ThreadTwo = "+t2.getPriority());
        System.out.println("New Priority value of ThreadThree = "+t3.getPriority());
        System.out.println("Current State of thread = "+t1.getState());
        try
        {
            //t1.setPriority(12); //generates exception as IllegalArgumentException
            t1.start();
            t1.start();//generates exception as IllegalThreadStateException
            t2.start();
            t3.start();
        }
        // catch(IllegalArgumentException e)
        // {
            // System.out.println("Invalid  Priority value");
        // }
        catch(IllegalThreadStateException e)
        {
            System.out.println("Thread cannot be started multiple times");
        }
    }
}