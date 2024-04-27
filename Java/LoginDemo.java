// /*
    // 25-04-2023
    // WAP in JAVA to create a class as named Login to input user name and password using constructor after that validate user name . The given user_name and password are cimage and aku respectively.
// */
package pack;
import java.io.*;
class Login
{
    String unm,pnm;
    DataInputStream ds = new DataInputStream(System.in);
    Login() throws IOException
    {
        System.out.print("Enter User name = ");
        unm=ds.readLine();
        System.out.print("Enter Password = ");
        pnm=ds.readLine();
    }
    public void ValidateLogin() throws InterruptedException
    {
        System.out.println("Login Validating.................");
        Thread.sleep(3000);
        if(unm.equals("aditya")==true && pnm.equals("Raj")==true)
            System.out.println("Login Success");
        else if(unm.equals("aditya")==false && pnm.equals("Raj")==false)
            System.out.println("Login failed due to both are invalid.");
        else if(unm.equals("aditya")==false)
            System.out.println("Login falid due to invalid user name");
        else
            System.out.println("Login failed due to invalid password");
    }
}
class LoginDemo
{
    public static void main(String args[]) throws IOException,InterruptedException
    {
        Login obj = new Login();
        obj.ValidateLogin();
    }
}

// package pack;
// import java.io.*;
// class Login
// {
    // String unm,pnm;
    // DataInputStream ds = new DataInputStream(System.in);
    // Login() throws IOException
    // {
        // System.out.println("Enter User name ");
        // unm=ds.readLine();
        // System.out.println("Enter Password");
        // pnm=ds.readLine();
    // }
    // public void validateLogin() throws InterruptedException
    // {
        // System.out.println("Login Validating.................");
        // Thread.sleep(2000);
        // if(unm.equals("cimage")==true && pnm.equals("aku")==true)
            // System.out.println("Login Success");
        // else if(unm.equals("cimage")==false && pnm.equals("aku")==false)
            // System.out.println("Login failed due to both are invalid.");
        // else if(unm.equals("cimage")==false)
            // System.out.println("Login falid due to invalid user name");
        // else
            // System.out.println("Login failed due to invalid password");
    // }
// }
// class LoginDemo
// {
    // public static void main(String args[]) throws IOException,InterruptedException
    // {
        // Login obj = new Login();
        // obj.validateLogin();
    // }
// }