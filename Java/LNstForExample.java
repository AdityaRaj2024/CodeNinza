package mypack;
import java.util.Scanner;
class LNstForExample
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n,i,j,k;
        System.out.print("Enter Number of terms = ");
        n=sc.nextInt();
        for(i=1;i<=n;i++)
        {
            for(j=n;j>i;j--)
            {
                System.out.print(" "+"\t");
            }
            for(k=1;k<=i;k++)
            {
                System.out.print("*"+"\t");
            }
            System.out.println();
        }
    }
}