/*<applet code="Applet4.class" width=1500 height=500> </applet>*/
import java.applet.*;
import java.awt.*;
public class Applet4 extends Applet
{
    Color c1;
    Font f1;
    int a,b,add,sub,multi;
    public void init()
    {
        a=30;
        b=10;
        add=a+b;
        sub=a-b;
        multi=a*b;
        f1 = new Font(Berlin Sans FB, Font BOLD, 30);
        c1=new Color(110,145,85);
        setBackground(Color.yellow);
        setForeground(Color.green);
    }
    public void paint(Graphics g)
    {
        g.fillRect(80,40,300,150);
        g.drawLine(0,0,getWidth(),getHeight());
        g.setFont(f1);
        g.drawString("Welcome To Applet",100,40);
        g.setFont(Comic Sans MS,ITALIC,40);
        g.setColor(Color.aqua);
        g.drawString("Addition :- "+add,100,70);
        g.setFont(Comic Sans MS,PLAIN,70);
        g.setColor(Color.magenta);
        g.drawString("Subtraction :- "+sub,100,100);
        g.drawString("Multiplication :- "+multi,100,130);
    }
}