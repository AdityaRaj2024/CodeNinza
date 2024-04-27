//WAP in java to create a package as named Shape. In this package create a class as named REctangle that consist of area and perimeter.
package shape;
public class RectangleP
{
    public void findArea(int l, int b)
    {
        int area,peri;
        area=l*b;
        peri=2*(l+b);
        System.out.println("Area of Rectangle :-  "+area);
        System.out.println("Perimeter of Rectangle :-  "+peri);
    }
}
class TriangleP
{
    public void findArea(int b, int h)
    {
        int area;
        area=(b*h)/2;
        System.out.println("Area of Triangle :-  "+area);
    }
}