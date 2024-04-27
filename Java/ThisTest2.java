/*
 * 17-05-2023
 * Example of this method
 */
public class ThisTest2 
{
    default ThisTest2() 
    {
        // this(50); //this() must be the first line of statement
        System.out.println("Inside Default constructor.");
    }

    ThisTest2(int x) 
    {
        this();
        System.out.println("Inside Parameterized constructor. " + x);
    }

    ThisTest2(int x, int y) 
    {
        this(50);
        System.out.println("Inside Parameterized constructor. " + (x + y));
    }

    public static void main(String[] args) 
    {
        // ThisTest2 t2 = new ThisTest2();
        ThisTest2 t2 = new ThisTest2(80, 50);
    }
}