
/*
 * 3. Write a program to give the examples of operators.
    a. Increment and decrement operators.
    b. Bitwise Complement Operator.
    c. Arithmetic operator.
    d. Relational Operator
    e. Bitwise operator.
    f. Conditional Operator.
*/
import java.util.*;

public class Operator3 {
    public static void main(String[] args) {
        int a, b;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 2 Number's :- ");
        a = sc.nextInt();
        b = sc.nextInt();
        System.out.println("Addition :- " + (a + b) + "\nSubtraction :- " + (a - b));
        System.out.println(a == b);
        System.out.println(a != b);
        System.out.println(a >= b);
        System.out.println(a <= b);
        System.out.println(a > b);
        System.out.println(a < b);
        System.out.println(a & b);
        System.out.println(~a);
        System.out.println(~b);
    }
}
