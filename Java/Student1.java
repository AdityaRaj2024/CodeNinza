
// WAP in java to input rollmo, name ,course and fee after that print it.
package mypack;
import java.util.*;

class Student1 
{
    public static void main(String[] args) 
    {
        int roll;
        String name,course;
        double fee;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Roll no, Name , Course & Fee = ");
        roll = sc.nextInt();
        // name = sc.nextLine();
        name = sc.next();
        course = sc.next();
        fee = sc.nextFloat();
        System.out.println("\n******Details of student*******");
        System.out.println("Roll No. " + roll + "\nName = " + name + "\ncourse :- " + course + "\nFee :- " + fee);
    }
}