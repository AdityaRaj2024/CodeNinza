package Swing;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JLabel;
import javax.swing.JButton;
import javax.swing.JTextField;
import javax.swing.JPasswordField;
import javax.swing.ImageIcon;
import java.awt.FlowLayout;
import java.awt.Image;
import java.awt.Color;
import java.awt.Font;

public class A01_swing_04 extends JFrame
{
    JPanel panel1,panel2;
    JLabel label1,label2;
    JButton btn1;
    JTextField txt1;
    JPasswordField pass1;
    Font ft;
    void swing4()
    {
        //font
        ft = new Font("Serif",Font.BOLD,30);
        
        //header
        panel1 = new JPanel();
        panel1.setBackground(new Color(0,0,0,150));
        panel1.setBounds(0,0,900,100);
        label2 = new JLabel("Login Example");
        label2.setForeground(Color.CYAN);
        //label2.setBounds(200,125,400,50);
        label2.setFont(ft);
        panel1.add(label2);
        
        //login Panel
        panel2 = new JPanel();
        panel2.setLayout(null);
        panel2.setSize(400,200);
        panel2.setBackground(new Color (0,0,0,65));
        panel2.setBounds(250,175,400,350);
        txt1 = new JTextField("Enter Username :- ");
        txt1.setBounds(50,50,300,50);
        txt1.setBackground(new Color(210,180,140));
        pass1 = new JPasswordField("Enter Password :- ");
        pass1.setBackground(new Color(210,180,140));
        pass1.setBounds(50,120,300,50);
        panel2.add(txt1); 
        panel2.add(pass1); 
        
        //frame
        setTitle("Login Page");
        setSize(900,650);
        setVisible(true); 
        setLayout(null);
        //background
        ImageIcon img = new ImageIcon("E:\\Wp\\2_01.jpg");
        Image img1 = img.getImage();
        Image t_img1 = img1.getScaledInstance(900,650,Image.SCALE_SMOOTH);
        img = new ImageIcon(t_img1);
        label1 = new JLabel("",img,JLabel.CENTER);
        label1.add(panel1);
        label1.add(panel2);
        label1.setBounds(0,0,900,650);
        add(label1);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
    }
    
    public static void main(String args[])
    {
        A01_swing_04 obj = new A01_swing_04();
        obj.swing4();
    }
}