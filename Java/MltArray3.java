package mypack;
import java.util.Scanner;
class MltArray3
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int arr[][]=new int[2][3];
        int i,j;
        System.out.println("Enter Elements in Array = ");
        for(i=0;i<2;i++)
            for(j=0;j<3;j++)
                arr[i][j]=sc.nextInt();
        System.out.println("Array Elements Are = ");
        // for(i=0;i<2;i++)
        // {
            // for(j=0;j<3;j++)
               // System.out.print(arr[i][j]+"\t");
           // System.out.println();
        // }
        //using for each loop
        for(int n[] : arr)
        {
            for(int p : n)
              System.out.print(p+"\t");
           System.out.println();  
        }
    }
}