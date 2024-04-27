package mypack1;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class PanelDemo1 extends JFrame
{
    JPanel obj;
    public PanelDemo1()
    {
        obj = new JPanel();
        
        setTitle("Panel");
        setSize(400,300);
        setVisible(true);
        add(obj);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public static void main(String args[])
    {
        PanelDemo1 pd = new PanelDemo1();
    }
}