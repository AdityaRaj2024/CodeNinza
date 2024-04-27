package Swing;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.awt.event.ActionListener;

public class A03_swing_01 extends JFrame
{
    void opt_1()
    {
        JPanel pnmain = new JPanel(null); 
        JPanel pnbutton = new JPanel();
        JPanel pnresult = new JPanel(null);
        
        Font ft1 = new Font("Arial",Font.BOLD,33);
        Font ft2 = new Font("Serif",Font.PLAIN,22);
        
        JLabel lbltitle = new JLabel("Arithmetic Operations");
        lbltitle.setBounds(30,30,400,30);
        lbltitle.setFont(ft1);
        lbltitle.setForeground(Color.RED);
        pnmain.add(lbltitle);
        
        JLabel lblnum1 = new JLabel("First Number :- ");
        lblnum1.setFont(ft2);
        lblnum1.setBounds(30,100,200,30);
        pnmain.add(lblnum1);
        
        JTextField txtnum1 = new JTextField(20);
        txtnum1.setBounds(200,100,200,30);
        pnmain.add(txtnum1);
        
        
        JLabel lblnum2 = new JLabel("Second Number :- ");
        lblnum2.setFont(ft2);
        lblnum2.setBounds(30,150,200,30);
        pnmain.add(lblnum2);
        
        JTextField txtnum2 = new JTextField(20);
        txtnum2.setBounds(200,150,200,30);
        pnmain.add(txtnum2);
        
        
        JLabel lblresult = new JLabel("Result :- ");
        lblresult.setBounds(200,200,200,30);
        lblresult.setFont(ft1);
        pnresult.add(lblresult);
        
        JTextField txtresult = new JTextField(20);
        txtresult.setBounds(350,200,200,30);
        txtresult.setEditable(false);
        pnresult.add(txtresult);
        
        pnbutton.setBounds(50,250,400,100);
        pnbutton.setLayout(new GridLayout(2, 4, 5, 5));
        
        JButton btnadd = new JButton("Add");
        btnadd.setFont(ft2);
        pnbutton.add(btnadd);
        
        JButton btnsub = new JButton("subtrct");
        btnsub.setFont(ft2);
        pnbutton.add(btnsub);
        
        JButton btnmult = new JButton("Multiply");
        btnmult.setFont(ft2);
        pnbutton.add(btnmult);
        
        JButton btnCancel = new JButton("Cancel");
        btnCancel.setFont(ft2);
        pnbutton.add(btnCancel);
        
        JButton btnClose = new JButton("Close");
        btnClose.setFont(ft2);
        pnbutton.add(btnClose);
        pnmain.add(pnbutton);

        JTabbedPane tabpn1 = new JTabbedPane();
        tabpn1.addTab("Input",null,pnmain);
        tabpn1.addTab("Result",null,pnresult);

        btnadd.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                int num1 = Integer.parseInt(txtnum1.getText());
                int num2 = Integer.parseInt(txtnum2.getText());
                int result = num1+num2;
                txtresult.setText(Integer.toString(result));
                tabpn1.setSelectedIndex(1);
            }  
        });
        
         btnsub.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                int num1 = Integer.parseInt(txtnum1.getText());
                int num2 = Integer.parseInt(txtnum2.getText());
                int result = num1-num2;
                txtresult.setText(Integer.toString(result));
                tabpn1.setSelectedIndex(1);
            }    
        });
        
         btnmult.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                int num1 = Integer.parseInt(txtnum1.getText());
                int num2 = Integer.parseInt(txtnum2.getText());
                int result = num1*num2;
                txtresult.setText(Integer.toString(result));
                tabpn1.setSelectedIndex(1);
            }    
        });
        
        btnCancel.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                txtnum1.setText("");
                txtnum2.setText("");
                txtresult.setText("");
            }    
        });
        
        btnClose.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                System.exit(0);
            }    
        });
        
        


        add(tabpn1);
        setVisible(true);
        setSize(800,600);
        setTitle("Arithmetic Operations.");
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        
    }
    
    public static void main(String[]args)
    {
        A03_swing_01 obj = new A03_swing_01();
        obj.opt_1();
    }
}