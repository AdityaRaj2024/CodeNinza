//WAP to implement method overloading
package mypack;
import java.util.Scanner;
class Sum
{
    // Scanner sc = new Scanner(System.in);
    void findSum(int a, int b)
    {
        System.out.println("Sum :-  "+(a+b));
    }
    void findSum(float a,float b)
    {
        System.out.println("Sum :-  "+(a+b));
    }
}
class Overload1
{
    public static void main(String args[])
    {
        Sum sm = new Sum();
        sm.findSum(10,20);
        sm.findSum(15.8f,32.6f);
    }
}