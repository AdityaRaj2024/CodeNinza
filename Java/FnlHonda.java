class Bike
{
    final void run()
    //void run()
    {
        System.out.println ("running");
    }
}
class FnlHonda extends Bike
{
    void run()
    {
        // COMPILE-ERROR! Can't override.
        System.out.println ("running");
    }
    public static void main (String args[])
    {
        FnlHonda honda = new FnlHonda();
        honda.run();
    }
}