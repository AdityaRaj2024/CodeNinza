package mypack;
import java.util.Scanner;
class MltArray7_1
{
     public static void main(String args[])
     {
        Scanner sc = new Scanner(System.in);
        int i,j;
        int a[][]=new int[4][];
        a[0]=new int[3];
        a[1]=new int[1];
        a[2]=new int[2];
        a[3]=new int[4];
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