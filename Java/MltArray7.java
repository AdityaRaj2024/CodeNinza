//WAP in JAVA to print flyod's triangle using array
package mypack;
import java.util.Scanner;
class MltArray7
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int r,c,i,j;
        System.out.println("Enter Row Size = ");
        r=sc.nextInt();
        int a[][]=new int[r][];
        for(c=0;c<r;c++)
        {
            a[c]=new int[c+1];
        }
        System.out.println("Enter Elements in Array = ");
        for(i=0;i<a.length;i++)
            for(j=0;j<a[i].length;j++)
                a[i][j]=sc.nextInt();
        System.out.println("Ragged Matrix :- ");
        for(i=0;i<a.length;i++)
        {
            for(j=0;j<a[i].length;j++)
            {
                System.out.print(a[i][j] + "\t");
            }
            System.out.println();
        }
             
    }
}