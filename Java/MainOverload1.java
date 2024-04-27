package mypack;
class MainOverload1
{
    public static void main(String a,String b)
    {
        System.out.println(a+b);
    }
    public static void main(int a)
    {
        // main("Hello ","World.");
        System.out.println(a*a);
    }
    public static void main(String[] a)
    {
        main("Hello ","World.");
        main(10);
        System.out.println("Main Method.");
    }
}