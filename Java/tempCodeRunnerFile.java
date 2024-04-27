interface Printable {
    void print();
}

interface Showable {
    void show();
}

class Interface2 implements Printable, Showable {
    public void print() {
        System.out.println("Hello");
    }

    public void show1() {
        System.out.println("Welcome");
    }

    public static void main(String args[]) {
        Interface2 obj = new Interface2();
        obj.print();
        obj.show1();
    }
}