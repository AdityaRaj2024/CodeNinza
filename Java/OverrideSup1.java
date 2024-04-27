package mypack;
class A
{
    int a = 15;
}
class B extends A
{
    int a = 45;
    void show()
    {
        System.out.println("Value of A :-  "+a);
        System.out.println("Value of A :-  "+super.a);
    }
}
class OverrideSup1
{
    public static void main(String args[])
    {
        B o = new B();
        o.show();
    }
}