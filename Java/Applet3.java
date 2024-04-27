import java.applet.*;
import java.awt.*;
/*<applet code="Applet3.class" width=500 height=500></applet>*/
public class Applet3 extends Applet
{
    public void init()
    {
        setBackground(Color.yellow);
        setForeground(Color.magenta);
        System.out.println("Initializing an applet");
    }
    public void start()
    {
        System.out.println("Starting an applet");
    }
    public void paint(Graphics g)
    {
        g.drawString("This is testing",40,50);
        System.out.println("Starting an Paint()");
        g.drawRect(40,70,100,40);
        g.fillRect(40,120,100,40);
        g.drawOval(40,170,30,60);
        g.fillOval(40,170,30,60);
        g.drawLine(40,240,140,240);
        g.drawArc(40,260,60,100,60,60);
        int x[]={300,250,280,290,200};
        int y[]={60,200,300,400,500};
        g.drawPolygon(x,y,5);
    }
    public void stop()
    {
        System.out.println("Stopping an applet");
    }
    public void destroy()
    {
        System.out.println("Destroying an applet");
    }
}