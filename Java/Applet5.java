//Applet Program1 - Applet Life Cycle
// package mypack;
import java.applet.*;
/*
    <applet code="Applet5.class" width=1700 height=700> </applet>
*/
public class Applet5 extends Applet
{
    public void init()
    {
        System.out.println("Applet is Initialised");
    }
    public void start()
    {
        System.out.println("Applet is Started");
    }
    public void stop()
    {
        System.out.println("Applet is Stopped");
    }
    public void destroy()
    {
        System.out.println("Applet is Destroyed");
    }
}