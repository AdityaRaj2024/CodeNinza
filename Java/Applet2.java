import java.applet.Applet;
import java.awt.Graphics;
/*<applet code="Applet2.class" width=500 height=500></applet>*/
public class Applet2 extends Applet
{
    public Applet2()
    { 
        System.out.println("Constructor running..."); 
    }
    public void init()
    { 
        System.out.println("This is init."); 
    }
    public void start()
    { 
        System.out.println("Applet started."); 
    }
    public void paint(Graphics g)
    {
        g.drawString("Hello, World!", 0, 50);
        System.out.println("Applet just painted.");
    }
    public void stop()
    {
        System.out.println("Applet stopped."); 
    }
    public void destroy()
    {
        System.out.println("Applet destroyed."); 
    }
}