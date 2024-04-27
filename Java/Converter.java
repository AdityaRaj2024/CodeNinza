/*
    Arnold wants to write a program to convert the temperature given in Celsius to Fahrenheit. The program will take temperature in Celsius as input from the user. To calculate the temperature, Arnold can use the following formula:
    F = C * 9/5 +32
    Here, C is the temperature in Celsius and F is the temperature in Fahrenheit. Help Arnold to perform the preceding task.
*/
package mypack;
import java.util.*;
class Temprature
{
    double cs,fh;
    void input()
    {
        Scanner inpt = new Scanner(System.in); // creates an object of Scanner
        System.out.print("Enter Temprature in Celcius = ");
        cs=inpt.nextDouble();
    }
    void show()
    {
        fh=cs*9/5+32;
        System.out.println("Temprature in Temprature :- "+fh);
    }
}
class Converter
{
    public static void main(String args[])
    {
        Temprature temp = new Temprature();
        temp.input();
        temp.show();
    }
}