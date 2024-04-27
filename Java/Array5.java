
/*
 * WAP in java to search any elemnts
 */
package mypack;
import java.util.*;

class Array5 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int s, i, j, t, se, min, mid, max,c=0;
        System.out.println("Enter Array Size = ");
        s = scn.nextInt();
        int num[] = new int[s];
        System.out.println("Enter Array Elements = ");
        for (i = 0; i < s; i++) {
            num[i] = scn.nextInt();
        }
        // Sorting of array
        for (i = 0; i < num.length; i++) {
            for (j = i + 1; j < s; j++) {
                if (num[i] > num[j]) {
                    t = num[i];
                    num[i] = num[j];
                    num[j] = t;
                }
            }
        }
        System.out.println("In Ascending Order :-");
        for (i = 0; i < s; i++) {
            System.out.print(num[i] + "\t");
        }
        // searching of element 
        System.out.print("\nEnter Elements to Search = ");
        se = scn.nextInt();
        // using linear searching
        for(i=0;i<s;i++)
        {
            if(num[i]==se)
                c++;
        }
        if(c>0)
            System.out.println(se + " is found "+c+" times.");
        else
            System.out.println(se + " is not found.");
        // using Binary Serching
        // min = 0;
        // max = s - 1;
        // while (min <= max) {
            // mid = (min + max) / 2;
            // if (se == num[mid]) {
                // System.out.println(se + " is found.");
                // break;
            // }
            // if (se < num[mid])
                // max = mid - 1;
            // if (se > num[mid])
                // min = mid + 1;
            // if (min > max)
                // System.out.println(se + " is not found.");
        // }
    }
}