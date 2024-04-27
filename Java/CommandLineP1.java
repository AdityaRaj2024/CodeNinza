/*
    This program in java is for printing pattren using for loop - in command Line Argument.
*/
package mypack;
public class CommandLineP1
{
    public static void main(String args[])
    {
        if(args.length>0)
        {
            int a,i,j,k;
            a=Integer.parseInt(args[0]);
            System.out.println("Right Triangle pattern");
            for(i=1;i<=a;i++)
            {
                for(j=1;j<=i;j++)
                {
                    System.out.print(" * ");
                }
                System.out.print("\n");
            }
            System.out.println("Mirrered Right Triangle pattern");
            for(i=1;i<=a;i++)
            {
                for(j=a;j>i;j--)
                {
                    System.out.print("   ");
                }
                for(k=1;k<=i;k++)
                {
                    System.out.print(" * ");
                }
                System.out.print("\n");
            }
            System.out.println("Square pattern");
            for(i=1;i<=a;i++)
            {
                for(j=1;j<=a;j++)
                {
                    if(i==1 || j==1 || i==a || j==a)
                        System.out.print(" * ");
                    else
                        System.out.print("   ");
                }
                System.out.print("\n");
            }
         }
         else
         {
             System.out.println("No Command Line Argument is Passed");
         }
    }
} 