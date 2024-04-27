/*
    We can define multiple class in a program.
*/
    //package mypack;
    //public class A
    class A
    {
        A()
        {
            System.out.println("Constructor A");
        }
    }
    class B
    {
        B()
        {
            System.out.println("Constructor B");
        }
    }
    //class C
    public class C
    {
        C()
        {
            System.out.println("Constructor C");
        }
        public static void main(String[] args)
        {
            System.out.println("Inside  Main of Class C");
        }
    }
