package mypack1;
import javax.swing.*;
class FrameDialog1
{
    JDialog obj;
    public FrameDialog1()
    {
        obj= new JDialog(); 
        obj.setTitle("JDialogDemo"); 
        obj.setVisible(true); 
        obj.setSize(300,150);
    }
}
class FrameDemo1 extends JFrame
{
    //JFrame obj;
    public FrameDemo1()
    {
        //obj= new JFrame(); 
       // obj.setTitle("Ashish"); 
        //obj.setVisible(true); 
       // obj.setSize(2500,800);
        super("ASD");
        setTitle("Ashish");

        //super("ASD");
        setVisible(true); 
        setSize(1100,600);
        
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //used to close the window and to exit without pressing Ctrl + c
    }
    public static void main(String[] args)
    {
    FrameDemo1 obj2= new FrameDemo1();
    FrameDialog1 obj= new FrameDialog1();
    }
}