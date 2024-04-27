import java.awt.*;
import java.applet.*;
/*<applet code="AppletBike.class" width=1700 height=400> </applet>*/
public class AppletBike extends Applet 
{
    Image picture;
    public void init() 
    {
        picture = getImage(getDocumentBase(), "bike.jpg");
    }
    public void paint(Graphics g) 
    {
        System.out.println("Bike is running.");
        for (int i = 0; i < 1400; i++) 
        {
            g.drawImage(picture, i, 30, this);
            try 
            {
                Thread.sleep(5);
            } 
            catch (Exception e) 
            {}
        }
    }
}