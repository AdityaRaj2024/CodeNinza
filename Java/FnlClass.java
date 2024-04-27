//final keyword example in java - with circle
package mypack;
final class ClassFnl
{
    // create a final method
    void display ()
    {
        System.out.println ("This is a final method.");
    }
}
class FnlClass extends ClassFnl
{
    // try to override final method
    void show()
    {
        System.out.println ("The final method is overridden.");
    }
    public static void main (String[] args)
    {
        FnlClass obj = new FnlClass();
        obj.display ();
    }
}