package mypack1;
import javax.swing.JFrame;
import javax.swing.JTabbedPane;

public class TabbedPane1 extends JFrame
{
    JTabbedPane obj;
    public TabbedPane1()
    {
        obj = new JTabbedPane(JTabbedPane.TOP);
        obj.addTab("Tab1",null);
        obj.addTab("Tab2",null);
        obj.addTab("Tab3",null);
        this.setTitle("Tabbed Pane");
        this.setVisible(true);
        this.setSize(200,200);
        this.add(obj);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public static void main(String[]args)
    {
        TabbedPane1 tp = new TabbedPane1();
    }
}