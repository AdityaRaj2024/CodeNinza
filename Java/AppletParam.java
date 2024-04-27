//Example of parameterized Applet
import java.applet.Applet;
import java.awt.Graphics;
public class AppletParam extends Applet
{
    public void paint(Graphics g)
    {
        String str=getParameter("msg");
        g.drawString(str,50,50);
    }
}
// <applet code="AppletParam.class" width=1700 height=200><param name="msg" value="Welcome To Java Applet"></applet>