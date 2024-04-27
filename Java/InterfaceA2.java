//WAP in java to design an interafce named shape which contains two methods as named findArea() and findPeri() and a variable as named pi=3.142. Again create two classes as named rectangle and circle. Input length,breadth and radius after that find area and perimeter of rectangle and circle.

package mypack;
import java.util.Scanner;
interface Shape
{
    void input();
    void findPeri();
    void findArea();
    float pi = 3.142f;
    Scanner sc = new Scanner(System.in);
}
class Rectangle implements Shape
{
    int l,b;
    public void input()
    {
        System.out.println("Enter Length And Breadth = ");
        l=sc.nextInt();
        b=sc.nextInt();
    }
    public void findArea()
    {
        int area = (l*b);
        System.out.println("Area of Rectangle :-  "+area);
    }
    public void findPeri()
    {
        int peri = 2*(l+b);
        System.out.println("Peri of Rectangle :-  "+peri);
    }
}
class Circle implements Shape
{
    int r;
    public void input()
    {
        System.out.println("Enter Radius of Circle = ");
        r=sc.nextInt();
    }
    public void findArea()
    {
        float area = (pi*r*r);
        System.out.println("Area of Circle :-  "+area);
    }
    public void findPeri()
    {
        float peri = (2*pi*r);
        System.out.println("Peri of Circle :-  "+peri);
    }
}
class InterfaceA2
{
    public static void main(String args[])
    {
        Rectangle rct = new Rectangle();
        rct.input();
        rct.findArea();
        rct.findPeri();
        Circle cr = new Circle();
        cr.input();
        cr.findArea();
        cr.findPeri();
    }
}