package Swing;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.ImageIcon;
import java.awt.Image;
import java.awt.FlowLayout;

public class A01_swing_02 extends JFrame
{
    JLabel label1;
    JPanel panel1;
    void swing2()
    {
        panel1 = new JPanel();
        setLayout(new FlowLayout());
        // setLayout(null);
        setTitle("Label Window");
        setSize(650,400);
        setVisible(true);
        ImageIcon img = new ImageIcon("E:\\Wp\\2_01.jpg");
        // Image i = img.getImage();//this code is used to resize the image
        // Image new_img = i.getScaledInstance(180,90,Image.SCALE_SMOOTH);
        // img = new ImageIcon(new_img);
        label1 = new JLabel("Logo",img,JLabel.CENTER);
        label1.setVerticalTextPosition(JLabel.BOTTOM);
        label1.setHorizontalTextPosition(JLabel.CENTER);
        add(label1);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
    }
    
    public static void main(String args[])
    {
        A01_swing_02 obj = new A01_swing_02();
        obj.swing2();
    }
}