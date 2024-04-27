//Example of Abstract Class
package mypack;
abstract class Bank
{
    abstract float getROI(float rate);
    Bank()
    {
        System.out.println("Welcome to Bank. ");
    }
}
class SBI extends Bank
{
    SBI()
    {
        System.out.println("Welcome to SBI. ");
    }
    float getROI(float rate)
    {
        return(rate);
    }
    void display()
    {
        System.out.println("Interesr Rate :-  "+getROI(8.4f));
    }
}
class BOB extends Bank
{
    BOB()
    {
        System.out.println("Welcome to BOB. ");
    }
    float getROI(float rate)
    {
        return(rate);
    }
    void display()
    {
        System.out.println("Interesr Rate :-  "+getROI(8.7f));
    }
}
class Abstract1
{
    public static void main(String args[])
    {
        SBI bk = new SBI();
        bk.display();
        BOB b = new BOB();
        b.display();
    }
}