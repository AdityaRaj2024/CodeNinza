//Example of Static Block;
package mypack;
class Static4
{
    static 
    {
        int a=5,b=10;
        System.out.println("Add = "+(a+b));
    }
    public static void main(String args[])
    {
        Static4 obj = new Static4();
    }
}