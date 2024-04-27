//WAP in java to implement this() method to invoke current class constructor
package mypack;
class This2
{
    int a,b;
    This2()
    {
        // this("String");
        System.out.println("Inside Default constructor.");
    }
    This2(String s)
    {
        this();
        System.out.println("Inside Parameterized constructor ");
    }
    public static void main(String[] args) 
    {
        This2 obj = new This2(" Of JAVA.");
        // This2 obj = new This2();
    }
}