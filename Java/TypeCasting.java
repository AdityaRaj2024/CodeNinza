//TypeCasting in java
package mypack;
class Cast {
    void wCast() 
    {
        int myInt = 9;
        double myDouble = myInt; // Automatic casting: int to double
        System.out.println(myInt); // Outputs 9
        System.out.println(myDouble); // Outputs 9.0
    }

    void nCast() 
    {
        double myDouble = 9.78;
        int myInt = (int) myDouble; // Manual casting: double to int
        System.out.println(myDouble); // Outputs 9.78
        System.out.println(myInt); // Outputs 9
    }
}

public class TypeCasting {
    public static void main(String[] args) {
    Cast wc = new Cast();
    Cast nc = new Cast();
    wc.wCast();
    nc.nCast();
    }
}