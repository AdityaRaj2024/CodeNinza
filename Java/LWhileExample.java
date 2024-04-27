package mypack;
import java.util.Scanner;
class LWhileExample
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int num,n,i,r,c=0;
        double s=0;
        System.out.print("Enter Any Number = ");
        num = sc.nextInt();
        n=num;
        while(num>0)
        {
            c++;
            num/=10;
        }
        System.out.println("Count of Digit of "+n+" is :- "+c);
        num=n;
        while(num>0)
        {
            r=num%10;
            s=s+(Math.pow(r,c));
            num=num/10;
        }
        num=n;
        if(s==num)
            System.out.println(num+" is an armstrong number.");
        else
           System.out.println(num+" is not an armstrong number."); 
    }
}