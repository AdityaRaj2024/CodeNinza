
//StringBuffer Class Example
import java.util.Scanner;

class StringBuff1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuffer sb = new StringBuffer("");
        StringBuffer sb1 = new StringBuffer("Welcome");
        System.out.print("Add String =  ");
        sb.append(sc.nextLine());
        System.out.println("Capacity of sb is :-  " + sb.capacity());
        System.out.println("Capacity of sb1 is :-  " + sb1.capacity());
        System.out.println("Length of sb1 is :-  " + sb1.length());
        System.out.println("Length of sb is :-  " + sb.length());
        System.out.println(sb.insert(sb.length(), " Hello"));
        System.out.println("Reverse of " + sb + " is :-  " + sb.reverse());
        sb.reverse();
        System.out.println(sb.replace(1, 4, "Hi"));
        System.out.println(sb1.insert(7, " To Java"));
        System.out.println(sb1.append(" Programming."));
        System.out.println(sb1.delete(8, 10));
        System.out.println(sb1.deleteCharAt(0));
    }
}