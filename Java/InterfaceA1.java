//WAP in JAVA to implements interface
package mypack;
interface IA1
{
    void disp1();
}
interface IA2
{
    void disp2();
}
class IB implements IA1, IA2
{
    public void disp1()
    {
        System.out.println("Hello.");
    }
    public void disp2()
    {
        System.out.println("Hi.");
    }
}
class InterfaceA1
{
    public static void main(String args[])
    {
        IB o = new IB();
        o.disp1();
        o.disp2();
    }
}