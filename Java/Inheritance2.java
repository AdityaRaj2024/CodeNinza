//WAP in JAVA to implement MultiLevel Inheritance.-
package mypack;
import java.util.Scanner;
class Circle
{
    Scanner sc = new Scanner(System.in);
    float r,area,peri;
    void input()
    {
        System.out.print("Enter Radius of Circle = ");
        r=sc.nextFloat();
    }
}
class Area extends Circle
{
    void get()
    {
        input();
        area = 3.142f*r*r;
        peri=2*3.142f*r;
    }
}
class Show extends Area
{
    void disp()
    {
        get();
        System.out.println("Area of Circle :-  "+area);
        System.out.println("Perimeter of Circle :-  "+peri);
    }  
}
class Inheritance2
{
    public static void main(String args[]) 
    {
        Show obj = new Show();
        obj.disp();
    }
}