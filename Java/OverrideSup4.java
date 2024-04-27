//WAP in JAVA to design a class as named Bank. Input bank name, branch  name and branch location using cinsgructor. Again create a subclass as named customer. input customer id, customer name, account type and balance using constructor. Customer can credit and debit amount multiple times according to requirement. After that print current status of account.
package mypack;
import java.util.Scanner;
class Bank
{
    Scanner sc = new Scanner(System.in);
    String b_id,b_name,b_location;
    Bank()
    {
        System.out.println("Enter Bank Details =  ");
        System.out.print("Enter Bank ID :-  ");
        b_id=sc.next();
        System.out.print("Enter Bank Name :-  ");
        b_name=sc.next();
        System.out.print("Enter Bank Location :-  ");
        b_location=sc.next();
    }
}
class Customer extends Bank
{
    String c_id, c_name, acc_type,acc_no;
    float acc_balance;
    Customer()
    {
        super();
        System.out.println("Enter Customer Details :-  ");
        System.out.print("Enter Customer ID :-  ");
        c_id=sc.next();
        System.out.print("Enter Customer Name :-  ");
        c_name=sc.next();
        System.out.print("Enter Account type =  ");
        acc_type=sc.next();
        System.out.print("Enter Account Number = ");
        acc_no=sc.next();
        System.out.print("Enter Balance =  ");
        acc_balance=sc.nextFloat();
    }
    void credit()
    {
        float amt;
        System.out.print("Enter amount to be credit? = ");
        amt=sc.nextFloat();
        acc_balance+=amt;
    }
    void debit()
    {
        float amt;
        System.out.print("Enter amount to be debit? = ");
        amt=sc.nextFloat();
        if(amt>acc_balance)
            System.out.println("Low Balance.");
        else
            acc_balance-=amt;
    }
    void display()
    {
        System.out.println("Current Status of Account");
        System.out.println("Customer Name = "+c_name);
        System.out.println("Account Type :-  "+acc_type);
        System.out.println("Account Number :-  "+acc_no);
        System.out.println("Bank ID :-  "+b_id);
        System.out.println("Bank Name :-  "+b_name);
        System.out.println("Branch Location :-  "+b_location);
        System.out.println("Current Balance :-  "+acc_balance);
    }
}
class OverrideSup4
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        Customer obj = new Customer();
        char ch;
        do
        {
            System.out.print("Enter Choice for transcaion 'C' for credit & 'D' for debit :-  ");
            ch=sc.next().charAt(0);
            switch(ch)
            {
                case 'C':
                case 'c':
                    obj.credit();
                    break;
                case 'D':
                case 'd':
                    obj.debit();
                    break;
                default:
                    System.out.println("Invalid Choice ");
            }
        }while(ch == 'c' ||ch == 'C'|| ch =='d'||ch == 'D');
        obj.display();
    }
}