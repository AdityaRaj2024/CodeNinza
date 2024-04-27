//final keyword example in java - with method
package mypack;
class Bike
{
    final void run()
    {
        System.out.println ("running");
    }
}
class Honda extends Bike
{
    // void run() // COMPILE-ERROR! Can't override.
    // {
        // System.out.println ("running safely");
    // }
}
class FnlMethod
{
    public static void main (String args[])
    {
        Honda ha = new Honda ();
        ha.run();
    }
}