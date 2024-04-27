package mypack;
// import java.util.Scanner;
import java.util.*;
class Scanner1 
{
    String name,gender;
    Byte age;
    Integer qty;
    Double rate;
    Boolean status;
    public void input()
    {
        // creates an object of Scanner
        Scanner input = new Scanner(System.in);
        System.out.print("Enter your name: ");
        // takes input from the keyboard
        name = input.nextLine();
        System.out.print("Enter your Gender: ");
        gender=input.next();
        System.out.print("Enter your Age: ");
        age=input.nextByte();
        System.out.print("Enter Item Quantity : ");
        qty=input.nextInt();
        System.out.print("Enter Rate of Item (Double) : ");
        rate=input.nextDouble();
        System.out.print("Are you above 18?- :(True/False)");
        status = input.nextBoolean();
    }
    public void display()
    {
        // prints the name
        System.out.println("\n\nMy name is :" + name);
        System.out.println("My Gender is :" + gender);
        System.out.println("My Age is :" + age);
        System.out.println("Rate of Item :" + rate);
        System.out.println("Item Quantity : " + qty);
        if (status == true)
        {
            System.out.println("You are over 18");
        }
        else if (status == false)
        {
            System.out.println("You are under 18");
        }
    }
    public static void main(String[] args)
    {
        Scanner1 obj=new Scanner1();
        obj.input();
        obj.display();
    }
}