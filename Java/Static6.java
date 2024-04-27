//WAP in java to input any number after that find factorial using Static method.
package mypack;
import java.util.Scanner;
class Static6
{
    static void findFact()
    {
        int n,i;
        long fact=1;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Any Number = ");
        n=sc.nextInt();
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        System.out.println("Factorial of "+n+" is :-  "+fact);
    }
    public static void main(String args[])
    {
        findFact();
    }
}