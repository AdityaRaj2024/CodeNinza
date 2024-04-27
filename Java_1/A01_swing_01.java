package Swing;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JPasswordField;
import javax.swing.JButton;
import javax.swing.JPanel;
import java.awt.FlowLayout;

public class A01_swing_01 extends JFrame
{
    //JFrame Frame;
    JLabel label1,label2;
    JTextField txt1;
    JPasswordField txt2;
    JButton btn1,btn2;
    JPanel panel1;
    void swing1()
    {
        // Frame = new JFrame();
        // Frame.setTitle("Frame Window");
        // Frame.setVisible(true);
        // Frame.setSize(500,600);
        panel1 = new JPanel();
        setLayout(new FlowLayout());
        setSize(350,400);
        setTitle("Label Window");
        setVisible(true);
        label1 = new JLabel("Enter UserName :- ");
        add(label1);
        txt1 = new JTextField(20);
        add(txt1);
        label2 = new JLabel("Enter Password :- ");
        add(label2);
        txt2 = new JPasswordField(20);
        txt2.setEchoChar('*');
        add(txt2);
        btn1 = new JButton("Login");
        add(btn1);
        btn2 = new JButton("Exit");
        add(btn2);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    
    public static void main(String[]args)
    {
        A01_swing_01 obj = new A01_swing_01();
        obj.swing1();
    }
}