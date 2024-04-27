
//WAP in JAVA to create applet window and design oval.
import java.awt.*;
import java.applet.*;
/*<applet code="AppletOvl.class" width=1700 height=700> </applet>*/
public class AppletOvl extends Applet 
{
    public void paint(Graphics g) 
    {
        setBackground(Color.yellow);
        setForeground(Color.green);
        g.drawOval(200, 175, 700, 450);
        g.fillOval(200, 175, 700, 450);
        System.out.println("Applet is Started");
    }
}