//WAP in JAVA to implement Default, Parameterized and copy constructor.
package mypack;
import java.util.Scanner;
class Math
{
    Scanner sc = new Scanner(System.in);
    private int x,y;
    Math()
    {
        System.out.println("Enter 2 Number's = ");
        x=sc.nextInt();
        y=sc.nextInt();
    }
    Math(int a, int b)
    {
        x=a;
        y=b;
    }
    Math(Math m)
    {
        x=m.x;
        y=m.y;
    }
    void show()
    {
        System.out.println("Sum :-  "+(x+y));
    }
}

class Constructor4 
{
    public static void main(String[] args) 
    {
        Math m1 = new Math();
        Math m2 = new Math(10,15);
        m1.show();
        m2.show();
    }
}