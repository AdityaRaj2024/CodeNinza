
//WAP in java to input multiple string after that sort in ascending order.
package mypack;
import java.util.Scanner;
class StringSort 
{
    Scanner sc = new Scanner(System.in);
    void input() 
    {
        int n, i, j;
        System.out.print("Enter Number of String = ");
        n = sc.nextInt();
        String str[] = new String[n];
        System.out.println("Enter "+n+" String = ");
        for (i = 0; i < n; i++) 
        {
            str[i] = sc.next();
        }
        String t;
        for (i = 0; i < str.length; i++) 
        {
            for (j = i; j < str.length; j++) 
            {
                if (str[i].compareTo(str[j]) > 0) 
                {
                    t = str[i];
                    str[i] = str[j];
                    str[j] = t;
                }
            }
        }
        System.out.println("Strings in Ascending Order :-  ");
        for (i = 0; i < str.length; i++) 
        {
            System.out.println(str[i]);
        }
    }
}

class String9 
{
    public static void main(String[] args) 
    {
        StringSort ss = new StringSort();
        ss.input();
    }
}