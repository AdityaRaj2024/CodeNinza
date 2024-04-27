
/*
    1)Write a program to perform the bitwise AND, OR, NOT, and XOR operations on the numbers, 5 and 9.
    
    2)Consider the following expression:
        4 * 4 + 8 / 4
    When Sam executes the preceding expression by using the Java code, he gets an output value of 18. However, he wants that the output should be 12. Help Sam to achieve the preceding task.       
    
    3)Write a program to display the postfix and prefix values of the given number, 5, by using increment operators.
    
    4)Write a program to perform left shift and right shift operations for 2 by 2 bits. In addition, perform unsigned right shift for -2 by 24 bits.
*/
package mypack;
import java.util.*;

class Operator {
    int x, y, b_and, b_or, b_not, b_no, b_xor, exp, bt;
    Scanner inpt = new Scanner(System.in); // creates an object of Scanner

    void operation() {
        // Scanner inpt = new Scanner(System.in); // creates an object of Scanner
        System.out.println("Enter 2 Number's = ");
        x = inpt.nextInt();
        y = inpt.nextInt();
        b_and = x & y;
        b_or = x | y;
        b_xor = x ^ y;
        b_not = ~x;
        b_no = ~y;
        exp = 4 * (4 + 8) / 4;
    }

    void disp() 
    {
        System.out.println("BitWise And of " + x + " and " + y + " is :- " + b_and);
        System.out.println("BitWise Or of " + x + " and " + y + " is :- " + b_or);
        System.out.println("BitWise Xor of " + x + " and " + y + " is :- " + b_xor);
        System.out.println("BitWise Not of " + x + " is :- " + b_not);
        System.out.println("BitWise Not of " + y + " is :- " + b_no);
        System.out.println("Output of Expression :- " + exp);
    }

    void bit() 
    {
        // System.out.print("Enter Number to perform Bit Shift = ");
        // bt=inpt.nextInt();
        bt=18;
        // System.out.println("Left Shit of "+bt+" is " + (bt << 2));
        System.out.println("Left Shit of " + bt + " is " + (bt << 2));
        System.out.println("Right Shit of " + bt + " is " +(bt >> 2));
        System.out.println("Unsigned Right Shit of " + bt + " is " + (bt >>> 1));
        // System.out.println("Left Shit of 20 is " + (20 << 2));
        // System.out.println("Left Shit of " + lb + " is " + (20 << 2));
        // System.out.println("Right Shit of " + lb + " is " +( 20 >> 2));
        // System.out.println("Unsigned Right Shit of " + lb + " is " + (20 >>> 2));
    }

    public static void main(String args[]) {
        Operator opt = new Operator();
        opt.operation();
        opt.disp();
        opt.bit();
    }
}