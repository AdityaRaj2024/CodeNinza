package mypack;
import java.util.Scanner;
class Array3
{
    public static void main(String args[])
    {
        Scanner scn = new Scanner(System.in);
        String fruits[] = new String[4];
        int i;
        System.out.println("Enter Elements in array = ");
        for(i=0;i<4;i++)
        {
            fruits[i]=scn.next();
        }
        System.out.println("Elements in Array :- ");
        for(i=0;i<4;i++)
        {
            System.out.print(fruits[i]+"\t");
        }
        System.out.println("\nUsing For Each Loop ");
        for(String s : fruits)
            System.out.print(s+"\t");
    }
}