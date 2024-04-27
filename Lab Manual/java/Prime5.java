import java.io.Console;
// import java.util.*;

public class Prime5 {
    public static void main(String[] args) {
        int n, i, r;
        Console cn = System.console();
        System.out.print("Enter Any Number = ");
        n = Integer.parseInt(cn.readLine());
        while (n > 0) {
            r = n % 10;
            for (i = 1; i <= r; i++) {
                if (r % i != 0)
                    System.out.println(r);
            }
            n /= 10;
        }
    }
}
