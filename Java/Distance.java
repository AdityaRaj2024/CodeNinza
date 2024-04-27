/*
    1)John needs to write a program to calculate the total distance travelled by a vehicle. The program will take initial velocity, acceleration, and time as input from the user. To calculate the distance, John can use the following formula:
    
    Distance = ut+ (at2) /2
    Here, u is the initial velocity (meters per second), a is the acceleration (meters per second2), and t is the time (seconds). Help John to perform the preceding task.
*/

package mypack;
import java.util.*;
class Distans
{
    float u,a,t,ds;
    void input()
    {
        Scanner inp = new Scanner(System.in); // creates an object of Scanner
        System.out.print("Enter Initial Velocity,u = ");
        u=inp.nextFloat();
        System.out.print("Enter Time Duration,t = ");
        t=inp.nextFloat();
        System.out.print("Enter Acceleration,a = ");
        a=inp.nextFloat();
    }
    void display()
    {
        ds=u*t+(a*t)/2;
        System.out.println("Distance Covered :- "+ds);
    }
    // public static void main(String args[])
    // {
        // Distance dt = new Distance();
        // dt.input();
        // dt.display();
    // }
}
class Distance
{
    public static void main(String args[])
    {
        Distans dt = new Distans();
        dt.input();
        dt.display();
     }
}