/*
    2)Mary needs to write a program to calculate the volume of a cylinder. The program will take radius and height of cylinder as input from the user. To calculate the volume, Mary can use the following formula:
    Volume = πr2h
    Here, r is the radius of the cylinder, h is the height of the cylinder, and value of pie (π) is 22/7. Help Mary to perform the preceding task.
*/

//package mypack;
import java.util.*;

class Volume {
    // float r, h, v, pi;
    double r, h, v, pi;

    void input() {
        Scanner inp = new Scanner(System.in); // creates an object of Scanner
        System.out.print("Enter Radius = ");
        r = inp.nextDouble();
        // r = inp.nextFloat();
        System.out.print("Enter Height = ");
        h = inp.nextDouble();
        // h = inp.nextFloat();
    }

    void show() {
        // pi=3.1415;
        v = 3.14 * r * r * h;
        System.out.println("Volume of Cylinder :- " + v);
    }

    public static void main(String args[]) {
        Volume vl = new Volume();
        vl.input();
        vl.show();
        System.out.println());
    }
}