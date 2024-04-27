package Swing;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JLabel;
import javax.swing.JButton;
import javax.swing.JTextField;
import javax.swing.JPasswordField;
import javax.swing.JRadioButton;
import javax.swing.ButtonGroup;
import java.awt.Font;
import java.awt.Color;
import java.awt.GridBagConstraints;
import java.awt.GridBagLayout;

public class A02_swing_00 extends JFrame {
    JPanel panel1;
    JLabel label1, label2, label3, label4, label5, label6;
    JTextField txt1, txt2, txt3;
    JPasswordField pass1;
    JRadioButton rdb1, rdb2, rdb3;
    JButton btn1;
    Font ft;
    ButtonGroup bg;

    public A02_swing_00() {
        super("Registration Form"); // Setting title in the constructor

        panel1 = new JPanel(new GridBagLayout());
        panel1.setBackground(Color.CYAN);

        label1 = new JLabel("Registration Form");
        GridBagConstraints gbc = new GridBagConstraints();
        gbc.gridx = 0;
        gbc.gridy = 0;
        gbc.gridwidth = 2;
        gbc.anchor = GridBagConstraints.CENTER;
        panel1.add(label1, gbc);

        label2 = new JLabel("UserName :- ");
        gbc.gridx = 0;
        gbc.gridy = 1;
        gbc.gridwidth = 1;
        gbc.anchor = GridBagConstraints.WEST;
        panel1.add(label2, gbc);

        txt1 = new JTextField(20);
        gbc.gridx = 1;
        gbc.gridy = 1;
        panel1.add(txt1, gbc);

        label3 = new JLabel("Phone Number :- ");
        gbc.gridx = 0;
        gbc.gridy = 2;
        panel1.add(label3, gbc);

        txt2 = new JTextField(20);
        gbc.gridx = 1;
        gbc.gridy = 2;
        panel1.add(txt2, gbc);

        label4 = new JLabel("Email ID :- ");
        gbc.gridx = 0;
        gbc.gridy = 3;
        panel1.add(label4, gbc);

        txt3 = new JTextField(20);
        gbc.gridx = 1;
        gbc.gridy = 3;
        panel1.add(txt3, gbc);

        label5 = new JLabel("Password :- ");
        gbc.gridx = 0;
        gbc.gridy = 4;
        panel1.add(label5, gbc);

        pass1 = new JPasswordField(20);
        pass1.setEchoChar('*');
        gbc.gridx = 1;
        gbc.gridy = 4;
        panel1.add(pass1, gbc);

        label6 = new JLabel("Gender:- ");
        gbc.gridx = 0;
        gbc.gridy = 5;
        panel1.add(label6, gbc);

        bg = new ButtonGroup();
        rdb1 = new JRadioButton("A) Male");
        rdb2 = new JRadioButton("B) Female");
        rdb3 = new JRadioButton("C) Others");
        bg.add(rdb1);
        bg.add(rdb2);
        bg.add(rdb3);
        gbc.gridx = 1;
        gbc.gridy = 5;
        gbc.anchor = GridBagConstraints.WEST;
        panel1.add(rdb1, gbc);
        gbc.gridy = 6;
        panel1.add(rdb2, gbc);
        gbc.gridy = 7;
        panel1.add(rdb3, gbc);

        btn1 = new JButton("SignUp");
        gbc.gridx = 1;
        gbc.gridy = 8;
        gbc.anchor = GridBagConstraints.CENTER;
        panel1.add(btn1, gbc);

        add(panel1);

        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setSize(600, 400);
        setVisible(true);
    }

    public static void main(String args[]) {
        new A02_swing_00();
    }
}
