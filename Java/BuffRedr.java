//WAp in java to input three numbers after that find H.C.F. & L.C.M.

package pack;
import java.io.*;
class BuffRedr
{
    public static void main(String[] bfr) throws IOException
    {
        int a,b,c,h,l;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter 3 Number's = ");
        a=Integer.parseInt(br.readLine());
        b=Integer.parseInt(br.readLine());
        c=Integer.parseInt(br.readLine());
        h=(a<b && a<c ? a :(b<c ? b:c));
        while(a%h !=0 || b%h!=0 || c%h!=0)
            h--;
        l=(a>b && a>c ? a :(b>c ? b:c));
        while(l%a !=0 || l%b!=0 || l%c!=0)
            l++;
        System.out.println("H.C.F. :- "+h);
        System.out.println("L.C.M. :- "+l);
    }
}