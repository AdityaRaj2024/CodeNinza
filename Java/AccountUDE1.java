/*
    27-04-2023
    WAP in JAVA to create an user-defined exception as named "InsufficientFundException".Create a class  as named "Account" to input account number,holder's name, account type  and balance. A customer can debit and credit amount multiple times according to requirement. After that find current status of account.
*/
package mypack;
import java.io.*;
import java.util.Scanner;
class InsufficientFundException extends Exception 
{
    InsufficientFundException(String arg) 
    {
        super(arg);
    }
}
class Account 
{
    String ac_no, ac_nm, ac_tp;
    float acc_bl, amt;
    DataInputStream inp = new DataInputStream(System.in);
    void getInput() throws IOException
    {
        System.out.print("Enter your account number: ");
        ac_no = inp.readLine();
        System.out.print("Enter your account holder's name: ");
        ac_nm = inp.readLine();
        System.out.print("Enter your account type: ");
        ac_tp = inp.readLine();
        System.out.print("Enter your account balance: ");
        acc_bl = Float.parseFloat(inp.readLine());
    }
    void credit() throws IOException
    {
        System.out.print("Enter amount to be credit? = ");
        amt=Float.parseFloat(inp.readLine());
        acc_bl+=amt;
    }
    void debit() throws IOException,InsufficientFundException
    {
        System.out.print("Enter amount to be debit? = ");
        amt=Float.parseFloat(inp.readLine());
        if(amt>acc_bl)
            throw new InsufficientFundException("Insufficient Balance");
        else
            acc_bl-=amt;
    }
    void transaction() throws IOException,InsufficientFundException
    {
        Scanner sc = new Scanner(System.in);
        char ch;
        do 
        {
            System.out.println("Do you want to debit or credit?Enter 'd' or 'c'.");
            ch=sc.next().charAt(0);
            switch (ch) 
            {
                case 'D':
                case 'd':
                    debit();
                    break;
                case 'C':
                case 'c':
                    credit();
                    break;
                default:
                    System.out.println("Invalid Entry.");
            }
        } while (ch == 'c' ||ch == 'C'|| ch =='d'||ch == 'D');
    }
    void display()
    {
        System.out.println("\nAccount no: "+ac_no+"\nAccount holder name: "+ac_nm+"\nAccount type: "+ac_tp+"\nCurrent Balance: "+acc_bl);
    }
}
class AccountUDE1
{
    public static void main(String args[])
    {
        Account acc = new Account();
        try
        {
            acc.getInput();
            acc.display();
            acc.transaction();
            acc.display();
        }
        catch(NumberFormatException e)
        {
            System.out.println("Invalid input! ");
        }
        catch(InsufficientFundException e) 
        {
            System.out.println(e.getMessage());
        } 
        catch (IOException e) 
        {} 
        catch (Exception e) 
        {
            System.out.println(e.getMessage());
        }
    }
}