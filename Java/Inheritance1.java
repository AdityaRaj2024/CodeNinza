//WAP in JAVA to implement Single Level Inheritance.
package mypack;
import java.util.Scanner;
class Rectangle 
{
    Scanner sc = new Scanner(System.in);
    int l, b, area, peri;

    protected void input() 
    {
        System.out.println("Enter length and breadth = ");
        l = sc.nextInt();
        b = sc.nextInt();
    }
}

class RectangleA extends Rectangle 
{
    void getData() 
    {
        area = l * b;
        peri = 2 * (l + b);
    }

    void show() 
    {
        System.out.println("Area :-  " + area);
        System.out.println("Perimeter :-  " + peri);
    }
}

class Inheritance1 
{
    public static void main(String args[]) 
    {
        RectangleA rct = new RectangleA();
        rct.input();
        rct.getData();
        rct.show();
    }
}