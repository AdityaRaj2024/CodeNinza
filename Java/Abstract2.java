//WAP in java to find area of rectangle and triangle using abstract class.
package mypack;
import java.util.Scanner;
abstract class Shape
{
    float l,b,area;
    abstract float area();
    Scanner sc = new Scanner(System.in);
}
class Rectangle extends Shape
{
    Rectangle()
    {
        System.out.println("Enter Length and Breadth =  ");
        l=sc.nextInt();
        b=sc.nextInt();
    }
    float area()
    {
        area = l*b;
        return area;
        // System.out.println("Area of Rectangle :-  "+area);
    }
}
class Triangle extends Shape
{
    Triangle()
    {
        System.out.println("Enter Breadth and Height =  ");
        l=sc.nextInt();
        b=sc.nextInt();
    }
    float area()
    {
        area = (l*b)/2;
        return area;
        // System.out.println("Area of Triangle :-  "+area);
    }
}
class Abstract2
{
    public static void main(String[] arg)
    {
        Rectangle rct = new Rectangle();
        System.out.println("Area of Rectangle :-  "+rct.area());
        // rct.area();
        Triangle t = new Triangle();
        System.out.println("Area of Rectangle :-  "+t.area());
        t.area();
    }
}