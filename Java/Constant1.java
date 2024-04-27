package mypack;
import java.util.Scanner;
// import java.util.*;
// public class Constant1
class Constant1
{
    //declaring constant
    private static final double PRICE=384.90;
    public static void main(String[] args)
    {
        int unit;
        double total_bill;
        //PRICE=900;
        System.out.print("Enter the number of units you have used : ");
        Scanner sc=new Scanner(System.in);
        unit=sc.nextInt();
        total_bill=PRICE*unit;
        System.out.println("The total amount you have to deposit is : "+total_bill);
    }
}