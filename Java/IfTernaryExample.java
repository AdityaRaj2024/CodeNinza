package mypack;
import java.util.Scanner;

public class IfTernaryExample
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        int num;
        String out;
        System.out.print("Enter Any Number = ");
        num=s.nextInt();
        out=(num%2==0)?"even number":"odd number";
        System.out.println(out);
    }
}