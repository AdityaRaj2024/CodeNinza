//WAP in JAVA to implements interface
package mypack;
interface IA1
{
    public void show1()
    {
        System.out.println("Interface 1");
    }
}
interface IA2
{
    public void show2()
    {
        System.out.println("Interface 2");
    }
}
class IB implements IA1,IA2
{
    void display()
    {
        System.out.println("Hello.");
    }
}
class InterafceA1
{
    public static void main(String args[])
    {
        IB o = new IB();
        o.show1();
        o.show2();
        o.display();
    }
}