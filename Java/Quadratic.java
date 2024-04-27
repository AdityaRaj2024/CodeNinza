//WAP in java to input three numbers after that find roots of quadratic equation with nature.
package pack;
import java.io.*;
class Quadratic
{
    public static void main(String[] bfr) throws IOException
    {
        double a,b,c,d,r1,r2;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter 3 Number's = ");
        a = Float.parseFloat(br.readLine());
        b = Float.parseFloat(br.readLine());
        c = Float.parseFloat(br.readLine());
        d=(b*b-(4*a*c));
        if(d>0)
        {
            r1=(-b+Math.sqrt(d))/2*a;
            r2=(-b-Math.sqrt(d))/2*a;
            System.out.println("Roots are Real and UnEqual \nHence the root are as follows "+"\n"+r1+"\t"+r2);
        }
        else if(d==0)
        {
            r1=(-b/(2*a));
            r2=(-b/(2*a));
            System.out.println("Roots are Real and Equal "+"\n"+"Hence the root is "+r1); 
        } 
        else
            System.out.println("The equation has unreal root."); 
        
    }
}