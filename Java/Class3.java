//WAP in JAVA to design a class as named conversion. Input Binary number and Decimal number after that convert into opposite format.
package mypack;
import java.util.Scanner;
class Conversion
{
    Scanner sc = new Scanner(System.in);
    void findBin()
    {
        int n,i,d,b;
        System.out.print("Enter Decimal Number =  ");
        n=sc.nextInt();
        StringBuffer sb = new StringBuffer();
        b=n;
        for(i=0;n>0;i++)
        {
            d=n%2;
            sb.insert(i,d);
            n=n/2;
        }
        System.out.println("Binary Digit of " + b + " is :- " + sb.reverse());
    }
    void findDec()
    {
        int b,n,i=1,d,r=0;
        System.out.print("Enter Binary Digit =  ");
        b=sc.nextInt();
        n=b;
        while(b>0)
        {
            d=b%10;
            r=r+d*i;
            i=i*2;
            b/=10;
        }
        System.out.println("Decimal Digit of " + n + " is :- " + r);
    }
}
class Class3
{
    public static void main(String args[])
    {
        Conversion cv = new Conversion();
        cv.findBin();
        cv.findDec();
    }
}