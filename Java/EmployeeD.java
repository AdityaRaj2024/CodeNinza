//use of DataInputStream
package mypack;
import java.io.*;
class EmployeeD
{
     static public void main(String adit[]) throws IOException
     {
         int eid;
         String nm,post;
         char grade;
         float salary;
         DataInputStream ds = new DataInputStream(System.in);
         System.out.println("Enter Employee ID , Name , post , Salary and Grade =  ");
         eid=Integer.parseInt(ds.readLine());
         nm=ds.readLine();
         post=ds.readLine();
         salary = Float.parseFloat(ds.readLine());
         grade=(char)ds.read();
         System.out.println("\n*********Details of Employee.***************");
         System.out.println("Employee ID Number = "+eid+"\nName = "+nm+"\nPost = "+post+"\nGrade :- "+grade+"\nSalary = "+salary);
     }
}