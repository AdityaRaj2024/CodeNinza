/*
    WAP to find sum of all digit using do while loop.
*/
package mypack;
import java.util.Scanner;
class LDoWhlExample
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int num,r,s=0,c=0,n;
        System.out.print("Enter Any Number = ");
        num = sc.nextInt();
        n=num;
        do
        {
            r=num%10;
            c++;
            s=s+r;
            num/=10;
        }while(num>0);
        System.out.println("Count of Digit of "+n+" is :- "+c);
        System.out.println("Sum of Digit of "+n+" is :- "+s);
    }
}