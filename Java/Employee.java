/*

*/
package mypack;
import java.io.DataInputStream;
import java.io.IOException;

//import java.io.*;
class Employee
{
    public static void main(String args[])throws IOException
    {
        String ename,post;
        int empid;
        float salary;
        char grade;
        DataInputStream ds=new DataInputStream(System.in);
        System.out.println("Enter Employee ID, Name, post, Salary and Grade = ");
        empid=Integer.parseInt(ds.readLine());
        ename=ds.readLine();
        post=ds.readLine();
        salary=Float.parseFloat(ds.readLine());
        grade=(char)ds.read();
        System.out.println("Employee id = "+empid+"\nName = "+ename+"\nPost = "+post+"\nSalary = "+salary+"\nGrade = "+grade);
    }
}