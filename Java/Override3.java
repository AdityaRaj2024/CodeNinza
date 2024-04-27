package mypack;
class Shape
{
    void draw()
    {
        System.out.println("Drawing.");
    }
}
class Rectangle extends Shape
{
    void draw()
    {
        System.out.println("Drawing Rectangle.");
    }
}
class Circle extends Shape
{
    void draw()
    {
        System.out.println("Drawing Circle.");
    }
}
class Override3
{
    public static void main(String[] args)
    {
        Shape s = new Shape();
        s.draw();
        s=new Rectangle();
        s.draw();
        s=new Circle();
        s.draw();
    }
}