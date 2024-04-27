//WAP in JAVA to design a class Student to input rollno, name, and marks of three subject after that find total and Percentage marks.
package mypack;
import java.util.Scanner;
class Student
{
    int roll,m1,m2,m3;
    String name;
    float total,per;
    Scanner sc = new Scanner(System.in);
    void input()
    {
        System.out.println("Enter Roll , Name & marks  of 3 Subjects = ");
        roll=sc.nextInt();
        name=sc.next();
        m1=sc.nextInt();
        m2=sc.nextInt();
        m3=sc.nextInt();
    }
    void show()
    {
        total = m1+m2+m3;
        per=total/3;
        System.out.println("Roll No. = "+roll+"\nName :-  "+name+"\nTotal Marks :-  "+total+"\nPercentage Marks :-  "+per);
    }
}
class Class2
{
    public static void main(String args[])
    {
        Student std = new Student();
        std.input();
        std.show();
    }
}