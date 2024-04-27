
//WAP in java to design a class as named employee to input employee id,name, post and salary after that print all records. Implement Default, Parameterized and copy constructor.
package mypack;
import java.util.Scanner;

class Employee 
{
    Scanner sc = new Scanner(System.in);
    private String eid, ename, epost;
    private float salary;

    Employee() 
    {
        System.out.println("Enter Employee ID , Name, Post and salary = ");
        eid = sc.next();
        ename = sc.next();
        epost = sc.next();
        salary = sc.nextFloat();
    }

    Employee(String eid, String ename, String epost, float salary) 
    {
        this.eid = eid;
        this.ename = ename;
        this.epost = epost;
        this.salary = salary;
    }

    Employee(Employee emp) 
    {
        eid = emp.eid;
        ename = emp.ename;
        epost = emp.epost;
        salary = emp.salary;
    }

    void showRecord() 
    {
        System.out.println("\nEmployee ID :-  " + eid + "\nEmployee Name :-  " + ename + "\nEmployee Post :-  " + epost
                + "\nSalary :-  " + salary);
    }
}

class Constructor3 
{
    public static void main(String[] args) 
    {
        Employee e1 = new Employee();
        Employee e2 = new Employee("1011", "PQR", "Manager", 65000);
        e1.showRecord();
        e2.showRecord();

    }
}