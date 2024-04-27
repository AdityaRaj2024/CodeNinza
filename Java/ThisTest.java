/*
 * 17-05-2023
 * Example of this keyword
 */
class ThisTest {
    void show() {
        System.out.println(this);
    }

    public static void main(String[] args) {
        ThisTest t = new ThisTest();
        System.out.println(t);
        t.show();
    }
}