package shape;
class CircleP
{
    public void findArea(int r)
    {
        float area,peri;
        area=3.14f*r*r;
        peri=2*3.14f*r;
        System.out.println("Area of Circle :-  "+area);
        System.out.println("Perimeter of Circle :-  "+peri);
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