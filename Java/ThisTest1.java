/*
 * 17-05-2023
 * Example of this keyword
 */
public class ThisTest1 {
    int a = 500;

    // ThisTest1(int a) {
    // a = a;
    // }

    ThisTest1(int a) {
        this.a = a; // this keyword is used to refer the current local variable to all over the class
    }

    void show() {
        System.out.println(a);
    }

    public static void main(String[] args) {
        ThisTest1 t1 = new ThisTest1(200);
        t1.show();
    }
}