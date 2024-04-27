//Java Program to demonstrate the example of Switch statement
//where we are printing day name for the given number
package mypack;

import java.util.Scanner;

public class SwitchExample 
{
    public static void main(String[] args) 
    {
        Scanner scn = new Scanner(System.in);
        int d;
        String s;
        System.out.print("Enter Day Number = ");
        d = scn.nextInt();
        switch (d) 
        {
            case 1:
                s = "Sunday";
                break;
            case 2:
                s = "Monday";
                break;
            case 3:
                s = "Tuesday";
                break;
            case 4:
                s = "Wednesday";
                break;
            case 5:
                s = "Thursday";
                break;
            case 6:
                s = "Friday";
                break;
            case 7:
                s = "Saturday";
                break;
            default:
                s = "Invalid Day Number";
        }
        System.out.println(s);
    }
}