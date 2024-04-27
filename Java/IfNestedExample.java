//WAP in java to find greatest among 3 numbers using nested if else statement
package mypack;
import java.io.Console;
class IfNestedExample
{
    public static void main(String[] args)
    {
        Console con = System.console();
        int a,b,c,gt;
        System.out.println("Enter 3 Number's = ");
        a=Integer.parseInt(con.readLine());
        b=Integer.parseInt(con.readLine());
        c=Integer.parseInt(con.readLine());
        if(a>b)
        {
            if(a>c)
                gt=a;
            else
                gt=c;
        }
        else
        {
            if(b>c)
                gt=b;
            else
                gt=c;
        }
        System.out.println(gt+" is greatest.");
    }
}