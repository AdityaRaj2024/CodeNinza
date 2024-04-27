// Java Program to demonstrate the use of If else-if ladder.
//It is a program of grading system for fail, D grade, C grade, B grade, A grade and A+.
package mypack;
import java.io.Console;
public class IfElseIfExample
{
    public static void main(String[] args)
    {
        Console c = System.console();
        int marks;
        System.out.print("Enter Marks = ");
        marks=Integer.parseInt(c.readLine());
        if(marks<50 && marks>0)
        {
            System.out.println("fail");
        }
        else if(marks>=50 && marks<60)
        {
            System.out.println("D grade");
        }
        else if(marks>=60 && marks<70)
        {
            System.out.println("C grade");
        }
        else if(marks>=70 && marks<80)
        {
            System.out.println("B grade");
        }
        else if(marks>=80 && marks<90)
        {
            System.out.println("A grade");
        }
        else if(marks>=90 && marks<100)
        {
            System.out.println("A+ grade");
        }
        else
        {
            System.out.println("Invalid!");
        }
    }
}