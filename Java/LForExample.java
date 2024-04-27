package mypack;
import java.util.Scanner;
class LForExample
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        long num,f=1,i;
        System.out.print("Enter Any Number = ");
        num=sc.nextInt();
        for(i=1;i<=num;i++)
        {
            f=f*i;
        }
        System.out.println("Factroial of "+num+" is :- "+f);
    }
}