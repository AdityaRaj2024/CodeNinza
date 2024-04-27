/*
    
*/
package mypack;
import java.util.Scanner;
public class Static1
{
    public static int l,b,area,peri;
    Scanner sc = new Scanner(System.in);
    public static void input()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Length and Length :- ");
        l=sc.nextInt();
        b=sc.nextInt();
    }
    public static void Area()
    {
        // input();
        area=l*b;
        peri=2*(l+b);
    }
    public static void showResult()
    {
        // Area();
        System.out.println("Area = "+area);
        System.out.println("Perimeter :- "+peri);
    }
}