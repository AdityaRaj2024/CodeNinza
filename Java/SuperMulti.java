class a {
    void disp() {
        System.out.println("Hello");
    }
}

class b extends a {
    void disp() {
        // super.disp();
        System.out.println("Hi");
    }
}

class c extends b {
    void disp() {
        super.disp();
        System.out.println("Bye");
    }
}

public class SuperMulti {

    public static void main(String[] args) {
        b c = new b();
        c.disp();
    }
}
