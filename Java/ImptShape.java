package Shape;
import java.util.Scanner;
import shape.RectangleP;
class ImptShape
{
    public static void main(String[] arg)
    {
        Scanner sc = new Scanner(System.in);
        int a,b;
        System.out.println("Enter Length and Breadth = ");
        a=sc.nextInt();
        b=sc.nextInt();
        RectangleP rct = new RectangleP();
        rct.findArea(a,b);
        rct.findArea(8,6);
        rct.findPeri(a,b);
        rct.findPeri(8,6);
    }
}