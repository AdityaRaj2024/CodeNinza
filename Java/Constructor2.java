//WAP in JAVA to perform swapping operation between two variables using constructor.
package mypack;
import java.util.Scanner;
class Swap
{
    Scanner sc = new Scanner(System.in);
    int a,b,c;
    Swap()
    {
        System.out.println("Enter 2 Number's =  ");
        a=sc.nextInt();
        b=sc.nextInt();
        a=a+b;
        b=a-b;
        a=a-b;
    }
    void show()
    {
        System.out.println("Value of a :-  "+a);
        System.out.println("Value of b :-  "+b);
    }
}
class Constructor2
{
    public static void main(String[] args) 
    {
        Swap sw = new Swap();
        sw.show();
    }
}