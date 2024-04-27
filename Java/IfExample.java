//Java Program to demonstate the use of if statement.
package mypack;
import java.util.Scanner;
public class IfExample
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int age;
        System.out.print("Enter Age = ");
        age=sc.nextInt();
        if(age>=18)
        {
            System.out.println("Eligible to vote");
        }
        System.out.println("Thanks");
    }
}