//WAP in JAVA to design a employee class to input employee id,name,post and salary after that print it.
package mypack;
import java.util.Scanner;
class Employee
{
    private int eid;
    private String ename,epost;
    private float esalary;
    Scanner sc = new Scanner(System.in);
    void input()
    {
        System.out.println("Enter employee id, name, post and salary = ");
        eid=sc.nextInt();
        ename=sc.next();
        epost=sc.next();
        esalary=sc.nextFloat();
    }
    void displayData()
    {
        System.out.println("Employee ID :- "+eid+"\nEmployee Name :-  "+ename+"\nEmployee Post :- "+epost+"\nEmployee Salary :-  "+esalary);
    }
}
class Class1
{
    public static void main(String args[])
    {
        Employee emp = new Employee();
        // Employee emp;
        // emp = new Employee();
        emp.input();
        emp.displayData();
    }
}