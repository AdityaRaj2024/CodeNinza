/**
 *
 * @author aditya
 *         2. Write a Java program to display default value of all primitive
 *         data types of Java.
 */
public class Data2 {
    char ch;
    int i;
    float f;
    double d;
    byte b;
    short s;
    String str;

    public static void main(String args[]) {
        Data2 obj = new Data2();
        System.out.println("Default value of Character is :- " + obj.ch);
        System.out.println("Default value of Integer is :- " + obj.i);
        System.out.println("Default value of Byte is :- " + obj.b);
        System.out.println("Default value of Short is :- " + obj.s);
        System.out.println("Default value of float is :- " + obj.f);
        System.out.println("Default value of double is :- " + obj.d);
        System.out.println("Default value of String is :- " + obj.str);

    }
}
