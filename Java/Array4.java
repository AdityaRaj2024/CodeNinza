
//WAP in JAVA to input n numbers after that find sum and average.
package mypack;
import java.util.Scanner;

class Array4 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int s, i;
        float sum=0,avg;
        System.out.print("Enter Array Size = ");
        s = scn.nextInt();
        float num[] = new float[s];
        System.out.println("Enter Array Elements = ");
        for (i = 0; i < s; i++) 
        {
            num[i] = scn.nextFloat();
        }
        for (float n : num) {
            sum = sum + n;
        }
        avg = sum / s;
        System.out.println("Sum of " + s + " numbers = " + sum);
        System.out.println("Average of " + s + " numbers = " + avg);
    }

}