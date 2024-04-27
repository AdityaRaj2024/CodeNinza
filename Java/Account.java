/*
    27-04-2023
    WAP in JAVA to create an user-defined exception as named "InsufficientFundException".Create a class  as named "Account" to input account number,holder's name, account type  and balance. A customer can debit and credit amount multiple times according to requirement. After that find current status of account.
*/
package pack;
import java.io.*;
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
    char op, con;
    DataInputStream inp = new DataInputStream(System.in);

    void getInput() throws IOException 
    {
        System.out.println("Enter account number, holder's name, type and current balance = ");
        ac_no = inp.readLine();
        ac_nm = inp.readLine();
        ac_tp = inp.readLine();
        acc_bl = Float.parseFloat(inp.readLine());
        do 
        {
            System.out.println("Do you want to debit or credit?Enter 'd' or 'c'.");
            op = (char) inp.read();
            switch (op) 
            {
                case 'd':
                    System.out.print("Enter Amount to be debited.\t");
                    amt = Float.parseFloat(inp.readLine());
                    acc_bl = acc_bl - amt;
                    break;
                case 'c':
                    System.out.print("Enter Amount to be credited.\t");
                    amt = Float.parseFloat(inp.readLine());
                    acc_bl = acc_bl + amt;
                    break;
                default:
                    System.out.println("Invalid Entery.");
            }
        } while (con == 'c' || con == 'd');
    }

    static public void main(String args[]) 
    {
        Account act = new Account();
        try 
        {
            act.getInput();
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

/*
 * WAP in java to create an user defined exception as named
 * "InsufficientFundException". create a class as named "Account" to
 * input a/c no, holder's name, a/c type & balance. A customer can debit &
 * credit amount multiple times a/c to requirement.
 * After find current status of account.
 */

/*
 * import java.io.*;
 * class InsufficientFundException extends Exception
 * {
 * InsufficientFundException(String msg)
 * {
 * super(msg);
 * }
 * }
 * 
 * class Account
 * {
 * private String acc_holder,acc_type,acc_no;
 * private double bal;
 * BufferedReader scan = new BufferedReader(new InputStreamReader(System.in));
 * 
 * public void getInput() throws IOException
 * {
 * System.out.println("Enter your account number: ");
 * acc_no = scan.readLine();
 * System.out.println("Enter your account holder's name: ");
 * acc_holder = scan.readLine();
 * System.out.println("Enter your account type: ");
 * acc_type = scan.readLine();
 * System.out.println("Enter your account balance: ");
 * bal = Double.parseDouble(scan.readLine());
 * }
 * private void getCredit(double Amount)
 * {
 * bal = bal+Amount;
 * }
 * private void getDebit(double amount) throws InsufficientFundException
 * {
 * if(bal<amount)
 * {
 * throw new InsufficientFundException("Insufficient balance");
 * }
 * bal = bal-amount;
 * }
 * public void transction() throws IOException,InsufficientFundException
 * {
 * char choice1;
 * while(true)
 * {
 * System.out.
 * println("Do you want to make any transation or not\n(press 'Y' for yes or any other character for no)"
 * );
 * choice1 = (char)scan.read();
 * scan.readLine();
 * if(choice1 == 'Y' || choice1 == 'y')
 * {
 * System.out.
 * println("For credit press 'C' or for debit press 'D'\n(or any other character for terminate):"
 * );
 * char choice2 = (char)scan.read();
 * scan.readLine();
 * if(choice2 == 'c' || choice2 == 'C')
 * {
 * System.out.println("Enter amount the you want to credit:");
 * double amt = Integer.parseInt(scan.readLine());
 * getCredit(amt);
 * }
 * else if(choice2 == 'd' || choice2 == 'D')
 * {
 * System.out.println("Enter amount the you want to debit:");
 * double amt = Integer.parseInt(scan.readLine());
 * getDebit(amt);
 * }
 * else
 * {
 * System.out.println("Invalid choice");
 * break;
 * }
 * }
 * else
 * {
 * System.out.println("Thanks for transaction");
 * break;
 * }
 * }
 * }
 * public void Display()
 * {
 * System.out.println("\nAccount no: "+acc_no+"\nAccount holder name: "
 * +acc_holder+"\nAccount type: "+acc_type+"\nBalance: "+bal+"\n");
 * }
 * }
 * 
 * public class a150_exercise_exception
 * {
 * public static void main(String[] args)
 * {
 * Account ac = new Account();
 * try
 * {
 * ac.getInput();
 * ac.Display();
 * ac.transction();
 * ac.Display();
 * }
 * catch(NumberFormatException n)
 * {
 * System.out.println("Invalid input! "+n);
 * }
 * catch(InsufficientFundException n)
 * {
 * System.out.println(n);
 * }
 * catch(IOException e)
 * {}
 * catch(Exception e)
 * {
 * System.out.println(e);
 * }
 * }
 * }
 */