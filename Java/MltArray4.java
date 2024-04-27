package mypack;
import java.util.Scanner;
class MltArray4
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int r,c;
        System.out.println("Enter Row and Column Size = ");
        r=sc.nextInt();
        c=sc.nextInt();
        int arr[][]=new int[r][c];
        int i,j;
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
        System.out.println("Diagonal Array Elements Are = ");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i==j)
                    System.out.print(arr[i][j]+"\t");
                else
                    System.out.print(0+"\t");
            }
            System.out.println();
        }
        System.out.println("Upper Triangular Array Elements Are = ");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i<=j)
                    System.out.print(arr[i][j]+"\t");
                else
                    System.out.print(0+"\t");
            }
            System.out.println();
        }
        System.out.println("Lower Triangular Array Elements Are = ");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i>=j)
                    System.out.print(arr[i][j]+"\t");
                else
                    System.out.print(0+"\t");
            }
            System.out.println();
        }
    }
}