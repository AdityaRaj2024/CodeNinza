package shape;
import java.util.Scanner;
import shape.*;
class ImptShape2
{
    public static void main(String[] arg)
    {
        Scanner sc = new Scanner(System.in);
        int a,b,h;
        System.out.println("Enter Radius = ");
        a=sc.nextInt();
        System.out.println("Enter Breadth and height of triangle = ");
        b=sc.nextInt();
        h=sc.nextInt();
        CircleP cr = new CircleP();
        cr.findArea(a);
        TriangleP t = new TriangleP();
        t.findArea(b,h);
    }
}