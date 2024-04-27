//WAP in java to input any number after that print only odd digit
package pack;
import java.io.*;
class BufRedr
{
    public static void main(String[] bfr) throws IOException
    {
        int a,r;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter any Number's = ");
        a=Integer.parseInt(br.readLine());
        System.out.println("Odd Digits Of "+a+" are :-");
        while(a>0)
        {
            r=a%10;
            if(r%2==1)
                System.out.println(r);
            a/=10;
        }
    }
}