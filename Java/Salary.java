/*
    David needs to write a program to calculate the net payable salary. The program will take basic salary as an input from the user and calculate the total salary along with the following components: HRA, which is 50% of the basic salary Special allowance, which is 75% of the basic salary PF deduction, which is 12% of the basic salary After calculating the preceding salary components, the net payable salary should be displayed. Help David to perform the preceding requirement.

    Once you provide the basic salary as 5000, the
    following output is displayed:
    Basic salary =5000
    HRA =2500
    Special allowance =3750
    PF =600
    ----------------------------------
    Net payable salary=10650
*/

package mypack;
import java.util.*;
class Salary
{
    String name;
    int bs,hra,sa,pf,gs,ns;
    void input()
    {
        Scanner in = new Scanner(System.in); // creates an object of Scanner
        System.out.print("Enetr Name = ");
        name=in.nextLine();
        System.out.print("Enter Basic Salary = ");
        bs=in.nextInt();
    }
    void display()
    {
        hra=bs/100*50;
        sa=bs/100*75;
        pf=bs/100*12;
        gs=bs+hra+sa;
        ns=gs-pf;
        System.out.println("\n*****Salary_Slip**********");
        System.out.println("Basic Salary :- "+bs);
        System.out.println("HRA :- "+hra);
        System.out.println("Special Allowance :- "+sa);
        System.out.println("PF :- "+pf);
        System.out.println("\n---------------------------");
        System.out.println("Employee Name :- "+name);
        System.out.println("Gross Salary :- "+gs);
        System.out.println("Net Payable Salary :- "+ns);
    }
    public static void main(String args[])
    {
       Salary  sly = new Salary();
       sly.input();
       sly.display();
    }
}