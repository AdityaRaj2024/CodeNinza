class A {
    A() {
        System.out.println("Class A");
    }
}

class B extends A {
    B() {
        System.out.println("Class B");
    }
}

class C extends B {
    protected C() {
        System.out.println("Class C");
    }
}

class D extends C {
    public D() {
        System.out.println("Class D");
    }
}

class Constructor1 {
    public static void main(String[] args) {
        D d = new D();
    }
}