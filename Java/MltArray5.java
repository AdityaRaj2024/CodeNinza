package mypack;
import java.util.Scanner;
class MltArray5
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int r,c;
        System.out.println("Enter Row and Column Size = ");
        r=sc.nextInt();
        c=sc.nextInt();
        int arr[][]=new int[r][c];
        int i,j,sum=0;
        float avg;
        System.out.println("Enter Elements in Array = ");
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                arr[i][j]=sc.nextInt();
        System.out.println("Array Elements Are = ");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                System.out.print(arr[i][j]+"\t");
            }
            System.out.println();
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                sum+=arr[i][j];
            }
        }
        avg=(float)sum/(r*c);
        System.out.println("Sum of elements of 2D Array Are = "+sum);
        System.out.println("Average of elements of 2D Array Are = "+avg);
    }
}