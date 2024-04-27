package mypack;
import java.util.Scanner;
class LBreak
{
    public static void main(String args[])
    {
        //Scanner s = new Scanner(System.in);
        int i=1;
        while(i<=10)
        {
            System.out.println(i);
            i++;
            if(i==5)
                break;
        }
    }
}