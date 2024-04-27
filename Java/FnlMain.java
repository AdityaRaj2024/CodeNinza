final class FinalClass
{
    // create a final method
    public void display ()
    {
        System.out.println ("This is a final method.");
    }
}
class FnlMain extends FinalClass
{
        // try to override final method
        public void display ()
        {
            System.out.println ("The final method is overridden.");
        }
        public static void main (String[]args)
        {
            Main obj = new Main ();
            obj.display ();
        }
}