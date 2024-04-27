package mypack;
class Base
{
    Base()
    {
        System.out.println("Hello World");
    }
}
interface Infr1
{
    void disp1();
}
interface Infr2 extends Infr1
{
    void disp2();
}
class Derived extends Base implements Infr2
{
    public void disp1()
    {
        System.out.println("Welcome");
    }
    public void disp2()
    {
        System.out.println("Hi");
    }
}
class Interface3
{
    public static void main(String args[])
    {
        Derived obj = new Derived();
        obj.disp1();
        obj.disp2();
    }
}