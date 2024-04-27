/*
    user-defined exception using 'throw' keyword.
    26-04-2023
*/
//WAP in JAVA to create an user-defined exception as named "IllegalAgeException" . It must be raised if age is less than 18. Again create a class as named  person to input age after that check who is eligible for voting or not.
package pack;
import java.io.*;
class IllegalAgeException extends Exception
{
    IllegalAgeException(String msg)
    {
        super(msg);//calling constucter of super class
    }
}
class Person
{
    int age;
    DataInputStream ds = new DataInputStream(System.in);
    void getInput() throws IOException,IllegalAgeException
    {
        System.out.println("Enter Age of Person :- ");
        age=Integer.parseInt(ds.readLine());
        if(age<18)
        {
            IllegalAgeException e = new IllegalAgeException("Age is not eligible to vote");
            throw e;
            //throw new IllegalAgeException("Age is not eligible to vote");
        }
    }
    void validateAge()
    {
        if(age>=18)
            System.out.println("Age is eligible for voting.");
    }
    public static void main(String args[])
    {
        Person obj=new Person();
        try
        {
            obj.getInput();
            obj.validateAge();
        }
        catch(IllegalAgeException e)
        {
            System.out.println(e);
            // System.out.println(e.getMessage());
        }
        catch (IOException e)
        {}
        catch(NumberFormatException e)
        {
            System.out.println("Invalid Input");
        }
    }
}