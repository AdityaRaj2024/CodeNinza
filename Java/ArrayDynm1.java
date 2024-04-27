//WAP in java to implement dynamic array
package mypack;

import java.util.Scanner;

class ArrayDynm1 {
    public static void main(String args[])
    {
        Scanner scn = new Scanner(System.in);
        int s, i;
        char ch;
        System.out.print("Enter Array Size = ");
        s = scn.nextInt();
        int a[]= new int[s];
        System.out.println("Enter Array Elements = ");
        for (i = 0; i < s; i++) 
        {
            a[i] = scn.nextInt();
        }
        do
        {
            if(a.length==s)
            {
                int a2[]= new int[s+2];
                for (i = 0; i < s; i++) 
                {
                    a2[i] = a[i];
                }
                a=a2;
                System.out.println("Enter More Array Elements = ");
                for (i = 0; i < 2; i++) 
                {
                    a2[s+i] = scn.nextInt();
                }
           
                System.out.println("Do You Want to Enter More Elements? y for yes.");
                ch=scn.next().charAt(0);
            }
        }while(ch=='Y' || ch=='y');
        System.out.println("Total Array Elements :- ");
        for(i=0;i<a.length;i++)
        {
            System.out.print(a[i]+"\t");
        }
    }
}