//WAP in JAVA to implement Hierarchial Inheritance.-
package mypack;
import java.util.Scanner;
class Shape
{
    Scanner sc = new Scanner(System.in);
    int a,b,h,area;
}
class Square extends Shape
{
    void square()
    {
        System.out.print("Enter Side of Square = ");
        a=sc.nextInt();
        area=a*a;
        System.out.println("Area of Square :-  "+area);
    }
}
class Triangle extends Shape
{
    void triangle()
    {
        System.out.println("Enter base and height of Triangle = ");
        b=sc.nextInt();
        h=sc.nextInt();
        area = (b*h)/2;
        System.out.println("Area of Triangle :-  "+area);
    }
}
class Inheritance3
{
    public static void main(String args[]) 
    {
        Square ob1 = new Square();
        ob1.square();
        Triangle ob2 = new Triangle();
        ob2.triangle();
    }
}