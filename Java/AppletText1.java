//Moving Text/Banner in java
/*<applet code="AppletText1.class" width=1500 height=500> </applet>*/
import java.awt.*;
import java.applet.*;
public class AppletText1 extends Applet implements Runnable 
{
    private String display;
    private int x, y, flag;
    Thread t;
    // initializing called when the applet is started.
    public void init()
    {
        display = "Hello World.";
        x = 100;
        y = 100;
        flag = 1;
        // creating thread
        t = new Thread(this, "MyThread");
        // start thread
        t.start();
    }
    // update the x co-ordinate
    public void update()
    {
        x = x + 10 * flag;
        if (x > 400)
            flag = -1;
        if (x < 10)
            flag = 1;
    }
    // run
    public void run()
    {
        while (true) 
        {
            // Repainting the screen
            // calls the paint function
            repaint();
            update();
            try 
            {
                // creating a pause of 100 ms
                // so that the movement is recognizable
                Thread.sleep(100);
            }
            catch (InterruptedException e) 
            {
                System.out.println(e);
            }
        }
    }
    // drawString
    public void paint(Graphics g)
    {
        g.drawString(display, x, y);
    }
}