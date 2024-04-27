/*
 * 16-05-2023
 * Example of Abstract class
 */
abstract class Vehicle {
    public abstract int getNofW();
}

class Car extends Vehicle {
    public int getNofW() {
        return 4;
    }
}

class Bus extends Vehicle {
    public int getNofW() {
        return 6;
    }
}

class TestAbs {
    public static void main(String[] args) {
        Car c = new Car();
        Bus b = new Bus();
        System.out.println(c.getNofW());
        System.out.println(b.getNofW());

    }
}