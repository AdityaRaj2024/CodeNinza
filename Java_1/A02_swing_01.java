package Swing;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JLabel;
import javax.swing.JButton;
import javax.swing.JTextField;
import javax.swing.JTextArea;
import javax.swing.JPasswordField;
import javax.swing.JRadioButton;
import javax.swing.JCheckBox;
import javax.swing.JComboBox;
import javax.swing.JList;
import javax.swing.JTabbedPane;
import javax.swing.DefaultListModel;
import javax.swing.ButtonGroup;
import java.awt.Font;
import java.awt.Color;
import java.awt.GridBagConstraints;
import java.awt.GridBagLayout;
import java.awt.FlowLayout;

public class A02_swing_01 extends JFrame
{
    JPanel panel1,panel2,panel3,panel4,panel5,header;
    JLabel label1,label2,label3,label4,label5,label6,label7,label8,label9,label10,label11,label12;
    JTextField txt1,txt2,txt3,txt5,txt4;
    JTextArea txta1;
    JTabbedPane tbp1;
    JPasswordField pass1;
    JRadioButton rdb1,rdb2,rdb3;
    JCheckBox chk1,chk2,chk3;
    JButton btn1,btn2,btn3;
    JComboBox cb1,cb2,cb3;
    JList lb1;
    DefaultListModel dlb1;
    Font ft1,ft2;
    ButtonGroup bg1;
    
    void swing1()
    {
        ft1 = new Font("Arial",Font.BOLD,24);
        ft2 = new Font("Serif",Font.PLAIN,16);
        
        
        panel1 = new JPanel(new GridBagLayout());
        panel2 = new JPanel();
        header = new JPanel(new FlowLayout());
        panel3 = new JPanel();
        panel4 = new JPanel();
        panel5 = new JPanel();
        panel1.setBackground(Color.CYAN);
        panel2.setBackground(Color.CYAN);
        panel3.setBackground(Color.CYAN);
        panel4.setBackground(Color.CYAN);
        panel5.setBackground(Color.BLUE);
        //panel1.setFont(ft);
        GridBagConstraints gbc = new GridBagConstraints();
        
        
        //Title of the form
        label1 = new JLabel("Registration Form");
        gbc.gridx= 0;
        gbc.gridy= 0;
        // gbc.weightx = 0.25;
        gbc.weightx=2;
        gbc.anchor = GridBagConstraints.CENTER;
        // gbc.fill = gbc.CENTER;
        label1.setFont(ft1);
        label1.setForeground(Color.RED);
        header.add(label1);
        header.setSize(20,100);
        panel5.add(header);
        gbc.weightx=1;
        panel1.add(panel5,gbc);
        
        //enter username
        label2 = new JLabel("UserName :- ");
        gbc.gridx= 0;
        gbc.gridy= 1;
        // gbc.gridwidth = 1; 
        // gbc.anchor = GridBagConstraints.WEST;
        label2.setFont(ft2);
        panel1.add(label2,gbc);
        
        txt1 = new JTextField(40);
        gbc.gridx= 1;
        gbc.gridy= 1;
        // gbc.gridwidth = 1;
        panel1.add(txt1,gbc);
        
        
        //enter phone number
        label3 = new JLabel("Phone Number :- ");
        gbc.gridx= 0;
        gbc.gridy= 2;
        // gbc.gridwidth = 1;
        label3.setFont(ft2);
        panel1.add(label3,gbc);
        
        txt2 = new JTextField(15);
        gbc.gridx = 1;
        gbc.gridy = 2;
        // gbc.gridwidth = 1;
        panel1.add(txt2,gbc);
        
        
        //enter email id
        label4 = new JLabel("Email ID :- ");
        gbc.gridx = 0;
        gbc.gridy = 3;
        // gbc.gridwidth = 1;
        label4.setFont(ft2);
        panel1.add(label4,gbc);
        
        txt3 = new JTextField(40);
        gbc.gridx = 1;
        gbc.gridy = 3;
        panel1.add(txt3,gbc);
        
        
        //enter password
        label5 = new JLabel("Password :- ");
        gbc.gridx = 0;
        gbc.gridy = 4;
        // gbc.gridwidth = 1;
        label5.setFont(ft2);
        panel1.add(label5,gbc);
        
        pass1 = new JPasswordField(40);
        pass1.setEchoChar('*');
        gbc.gridx = 1;
        gbc.gridy = 4;
        // gbc.gridwidth = 1;
        panel1.add(pass1,gbc);
        
        
        //enter Gender
        label6 = new JLabel("Gender:- ");
        gbc.gridx = 0;
        gbc.gridy = 5;
        // gbc.gridwidth = 1;
        label6.setFont(ft2);
        panel1.add(label6,gbc);
        
        bg1 = new ButtonGroup();     
        rdb1 = new JRadioButton("A) Male");
        rdb2 = new JRadioButton("B) Female");
        rdb3 = new JRadioButton("C) Others");
        bg1.add(rdb1);
        bg1.add(rdb2);
        bg1.add(rdb3);
        gbc.gridx = 1;
        gbc.gridy = 5;
        // gbc.anchor = GridBagConstraints.WEST;
        panel2.add(rdb1);
        // gbc.gridx = 2;
        gbc.gridwidth = 1;
        panel2.add(rdb2);
        // gbc.gridx = 3;
        // gbc.gridwidth = 1;
        panel2.add(rdb3);
        panel1.add(panel2,gbc);
        
        //Select Course
        label8 = new JLabel("Course:- ");
        gbc.gridx = 0;
        gbc.gridy = 6;
        label8.setFont(ft2);
        panel1.add(label8,gbc);
        
        cb1 = new JComboBox();
        cb1.addItem("BCA-AKU");
        cb1.addItem("BBA-AKU");
        cb1.addItem("BCA-PPU");
        cb1.addItem("BBM-PPU");
        cb1.addItem("BSC_IT-PPU");
        gbc.gridx = 1;
        panel1.add(cb1,gbc);
        
        
        //enter Hobbies
        label7 = new JLabel("Hobbies:- ");
        gbc.gridx = 0;
        gbc.gridy = 7;
        gbc.gridwidth = 1;
        label7.setFont(ft2);
        panel1.add(label7,gbc);
        
        
        chk1 = new JCheckBox("A) Music");
        chk2 = new JCheckBox("B) Movies");
        chk3 = new JCheckBox("C) Cricket");
        gbc.gridx = 1;
        // gbc.gridy = 6;
        // gbc.gridwidth = 1;
        // gbc.anchor = GridBagConstraints.WEST;
        panel3.add(chk1);
        // gbc.gridx = 2;
        // gbc.gridwidth = 1;
        panel3.add(chk2);
        // gbc.gridx= 3;
        // gbc.gridwidth = 1;
        panel3.add(chk3);
        panel1.add(panel3,gbc);
        

        // Address
        label8 = new JLabel("Address:- ");
        gbc.gridx = 0;
        gbc.gridy = 8;
        // gbc.gridwidth = 1;
        label8.setFont(ft2);
        panel1.add(label8,gbc);
        
        txta1 = new JTextArea(4,40);
        gbc.gridx = 1;
        gbc.gridy = 8;
        panel1.add(txta1,gbc);
        
        //select state
        label9 = new JLabel("State :- ");
        gbc.gridx = 0;
        gbc.gridy = 9;
        label9.setFont(ft2);
        panel1.add(label9,gbc);
        
        lb1 = new JList();
        lb1.setSelectedIndex(0);
        
        dlb1 = new DefaultListModel();
        dlb1.addElement("Bihar");
        dlb1.addElement("Jharkhand");
        dlb1.addElement("Uttar Pradesh");
        gbc.gridx = 1;
        lb1.setModel(dlb1);
        panel1.add(lb1,gbc);
        
        // select city
        label10 = new JLabel("City:- ");
        gbc.gridx = 0;
        gbc.gridy = 10;
        label10.setFont(ft2);
        panel1.add(label10,gbc);
        
        cb2 = new JComboBox();
        cb2.addItem("Patna");
        cb2.addItem("Bihar Sharif");
        cb2.addItem("Gaya");
        cb2.addItem("Varanasi");
        cb2.addItem("Prayagraj");
        cb2.addItem("Ayodhya");
        cb2.addItem("Mathura");
        cb2.addItem("Ranchi");
        cb2.addItem("Dhanbad");
        gbc.gridx = 1;
        panel1.add(cb2,gbc);
        
        // enter Pin code
        label11 = new JLabel("Pin Code :- ");
        gbc.gridx = 0;
        gbc.gridy = 11;
        label11.setFont(ft2);
        panel1.add(label11,gbc);
        
        txt4 = new JTextField(10);
        gbc.gridx = 1;
        gbc.gridy = 11;
        panel1.add(txt4,gbc);
        
       
        //sign up button
        btn1 = new JButton("SignUp");
        gbc.gridx = 1;
        gbc.gridy = 15;
        gbc.gridwidth = 1;
        //gbc.anchor = GridBagConstraints.WEST;
        //gbc.fill = gbc.HORIZONTAL;
        btn1.setFont(ft2);
        btn1.setBackground(Color.RED);
        panel4.add(btn1);
        
        //Cancel Button
        btn2 = new JButton("Cancel");
        // gbc.gridx = 1;
        // gbc.gridy = 8;
        // gbc.gridwidth = 1;
        //gbc.anchor = GridBagConstraints.CENTER;
        //gbc.fill = gbc.CENTER;
        btn2.setFont(ft2);
        panel4.add(btn2);
        // panel1.add(btn2,gbc);
        
        //Close Button
        btn3 = new JButton("Close");
        // gbc.gridx = 2;
        // gbc.gridy = 8;
        // gbc.gridwidth = 1;
        //gbc.fill = gbc.EAST;
        //gbc.anchor = GridBagConstraints.EAST;
        btn3.setFont(ft2);
        panel4.add(btn3);
        panel1.add(panel4,gbc);
        
        setSize(900,540);
        setVisible(true);
        setTitle("Registration Form");
        add(panel1);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        
        // panel1.setTitle("Registration Form");
        
    }
    
    public static void main(String args[])
    {
        A02_swing_01 obj = new A02_swing_01();
        obj.swing1();
    }
}