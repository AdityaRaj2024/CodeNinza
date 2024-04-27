//creating multiple thread
//09-05-2023
package pack;
class Thread1 extends Thread
{
    public void run()
    {
        try
        {
            for(char ch='A';ch<='D';ch++)
            {
                System.out.println(ch);
                Thread.sleep(900);
            }
        }
        catch(InterruptedException e)
        {}
    }
}
class Thread2 extends Thread
{
    public void run()
    {
        try
        {
            for(char ch='a';ch<='d';ch++)
            {
                System.out.println(ch);
                Thread.sleep(900);
            }
        }
        catch(InterruptedException e)
        {}
    }
}
class Thread3 extends Thread
{
    public void run()
    {
        try
        {
            for(int i=1;i<=4;i++)
            {
                System.out.println(i);
                Thread.sleep(900);
            }
        }
        catch(InterruptedException e)
        {}
    }
}
class ThreadMlt
{
    public static void main(String arg[])
    {
        Thread1 t1=new Thread1();
        Thread2 t2=new Thread2();
        Thread3 t3=new Thread3();
        t1.start(); //it will execute randomly
        t2.start(); //it will execute randomly
        t3.start(); //it will execute randomly
        t1.run();//it will execute one by one
        t2.run();//it will execute one by one
        t3.run();//it will execute one by one
        System.out.println("Name of main Thread = "+Thread.currentThread());
        System.out.println("Only Name of main Thread = "+Thread.currentThread().getName());
        System.out.println("Priority value of main Thread = "+Thread.currentThread().getPriority());
        System.out.println("Default Name of Thread1 = "+t1.getName());
        System.out.println("Default Name of Thread2 = "+t2.getName());
        System.out.println("Default Name of Thread3 = "+t3.getName());
        t1.setName("Ishan");
        t2.setName("Rohit");
        t3.setName("Surya");
        System.out.println("New Name of Thread1 = "+t1.getName());
        System.out.println("New Name of Thread2 = "+t2.getName());
        System.out.println("New Name of Thread3 = "+t3.getName());
        System.out.println("Default Priority value of Thread1 = "+t1.getPriority());
        System.out.println("Default Priority value of Thread2 = "+t2.getPriority());
        System.out.println("Default Priority value of Thread3 = "+t3.getPriority());
        t1.setPriority(Thread.MAX_PRIORITY);
        // t1.setPriority(10);
        t2.setPriority(7);
        //t3.setPriority(Thread.MIN_PRIORITY);
        t3.setPriority(1);
        System.out.println("New Priority value of Thread1 = "+t1.getPriority());
        System.out.println("New Priority value of Thread3 = "+t2.getPriority());
        System.out.println("New Priority value of Thread3 = "+t3.getPriority());
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