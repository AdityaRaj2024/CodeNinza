//WAP in java to input any number after that print prime number.
package pack;
import java.io.*;
class BufReadr
{
    public static void main(String[] bfr) throws IOException
    {
        int a,c=0,i;
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        //BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter any Number's = ");
        a=Integer.parseInt(br.readLine());
        //System.out.println("Odd Digits Of "+a+" are :-");
        for(i=1;i<=a/2;i++)
        {
            if(a%i==0)
                c++;
        }
        if(c==1)
            System.out.println(a+" is a prime number.");
        else
            System.out.println(a+" is not a prime number.");
    }
}