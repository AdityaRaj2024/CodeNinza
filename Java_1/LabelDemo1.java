//24-11-2023

package mypack1;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JLabel;
import javax.swing.ImageIcon;

public class LabelDemo1 extends JFrame
{
    JPanel jp;
    JLabel firstName,lastName;
    
    public LabelDemo1()
    {
        jp=new JPanel();
        firstName =  new JLabel("First Name");
        lastName = new JLabel("");
        lastName.setIcon(new ImageIcon("D:\\wallpaper\\1.jpg")); //used for adding Image on the place of Label
        add(jp);
        jp.add(firstName);
        jp.add(lastName);
        //lastName.setText("This is runtime text");
        
        setTitle("Label Demo");
        setSize(600,450);
        setVisible(true);
        
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //used to close the window and to exit without pressing Ctrl + c
    }
    
    public static void main(String [] args)
    {
        LabelDemo1 ld = new LabelDemo1();
    }
}