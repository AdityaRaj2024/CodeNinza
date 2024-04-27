import java.util.*;

public class Quadratic6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a, b, c, d, r1, r2;
        System.out.println("Enter 3 Number's = ");
        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();
        d = Math.pow(b, 2) - (4 * a * c);
        if (d > 0) {
            r1 = -b + Math.sqrt(d);
            r1 = r1 / (2 * a);
            r2 = -b - Math.sqrt(d) / (2 * a);
            r2 = r2 / (2 * a);
            System.out.println("Root1 = " + r1 + "\nRoot2 = " + r2);
        } else if (d == 0) {
            r1 = -b / (2 * a);
            System.out.println("Root1 = " + r1);
        } else if (d < 0) {
            System.out.println("Root not possible");
        }
    }
}
