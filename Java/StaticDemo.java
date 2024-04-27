//Static members in java
package mypack;

class StudentC 
{
    private static int count; // static variable

    StudentC() 
    {
        count++; // increment static variable
    }

    static void showCount() // static method
    {
        System.out.println("Number Of students : " + count);
    }
}

public class StaticDemo 
{
    public static void main(String[] args) 
    {
        StudentC s1 = new StudentC();
        StudentC s2 = new StudentC();
        StudentC.showCount(); // calling static method
        StudentC s3 = new StudentC();
        StudentC s4 = new StudentC();
        s4.showCount(); // calling static method
    }
}