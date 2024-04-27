
// 13. WAP in java to input any decimal number after that convert into binary number.
import java.util.Scanner;

class Binary13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int dec, d;
        StringBuffer bin = new StringBuffer();
        System.out.print("Enter Any Decimal Number :- ");
        dec = sc.nextInt();
        for (int j = 0; dec > 0; j++) {
            d = dec % 2;
            bin.insert(j, d);
            dec /= 2;
        }
        System.out.println("Binary Digit of " + dec + " is :- " + bin.reverse());
    }
}