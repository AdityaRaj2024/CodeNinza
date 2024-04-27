package Swing;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JLabel;
import javax.swing.JButton;
import javax.swing.ImageIcon;
import java.awt.FlowLayout;
import java.awt.Image;

public class A01_swing_03 extends JFrame
{
    JPanel panel1;
    JButton btn1;
    void swing3()
    {
        panel1 = new JPanel();
        
        setTitle("Frame Window");
        setSize(400,300);
        setVisible(true);
        ImageIcon img = new ImageIcon("E:\\Wp\\2_01.jpg");
        btn1 = new JButton(img);
        btn1.setBounds(50,100,120,50);
        add(btn1);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
    }
    
    public static void main(String args[])
    {
        A01_swing_03 obj = new A01_swing_03();
        obj.swing3();
    }
}