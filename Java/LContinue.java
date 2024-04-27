package mypack;
//import java.util.Scanner;
class LContinue
{
    public static void main(String args[])
    {
        //Scanner s = new Scanner(System.in);
        int i=1;
        while(i<=5)
        {
            if(i==3)
            {
                i++;
                continue;
            }
            System.out.println(i);
            i++;
        }
    }
}