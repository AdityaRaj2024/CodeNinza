package Swing;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class A02_swing_02 extends JFrame
{
    
    void swing1()
    {

        Font ft1 = new Font("Arial",Font.BOLD,24);
        Font ft2 = new Font("Serif",Font.PLAIN,16);
        
        JPanel pnmain = new JPanel(new GridBagLayout());
        JPanel pnbutton = new JPanel();
        JPanel pngender = new JPanel();
        JPanel pnhobbies = new JPanel();
        JPanel pndob = new JPanel();
        JPanel pnresult = new JPanel(null);
        pnmain.setBackground(Color.CYAN);
        pnresult.setBackground(Color.CYAN);
        GridBagConstraints gbc = new GridBagConstraints();
        
        //Title of the form
        JLabel lbltitle = new JLabel("Registration Form");
        gbc.gridy = 0;
        gbc.weighty = 0.25;
        lbltitle.setFont(ft1);
        lbltitle.setForeground(Color.RED);
        pnmain.add(lbltitle,gbc);
        
        // Enter Name
        JLabel lblUName = new JLabel("User Name");
        gbc.gridx = 0;
        gbc.gridy = 1;
        lblUName.setFont(ft2);
        pnmain.add(lblUName,gbc);
        
        JTextField txtUName = new JTextField(40);
        gbc.gridx = 1;
        pnmain.add(txtUName,gbc);
        
        // Enter Father's Name
        JLabel lblFName = new JLabel("Father's Name");
        gbc.gridx = 0;
        gbc.gridy = 2;
        lblFName.setFont(ft2);
        pnmain.add(lblFName,gbc);
        
        JTextField txtFName = new JTextField(40);
        gbc.gridx = 1;
        pnmain.add(txtFName,gbc);
        
        // Enter Mother's Name
        JLabel lblMName = new JLabel("Mother's Name");
        gbc.gridx = 0;
        gbc.gridy = 3;
        lblMName.setFont(ft2);
        pnmain.add(lblMName,gbc);
        
        JTextField txtMName = new JTextField(40);
        gbc.gridx = 1;
        pnmain.add(txtMName,gbc);
        
        // Mobile Number
        JLabel lblmnumb1 = new JLabel("Enter Mobile Number :- ");
        gbc.gridx = 0;
        gbc.gridy = 4;
        lblmnumb1.setFont(ft2);
        pnmain.add(lblmnumb1,gbc);
        
        JTextField txtmnumb1 = new JTextField(40);
        gbc.gridx = 1;
        pnmain.add(txtmnumb1,gbc);
        
        //enter email id
        JLabel lblemail = new JLabel("Email ID :- ");
        gbc.gridx = 0;
        gbc.gridy = 5;
        lblemail.setFont(ft2);
        pnmain.add(lblemail,gbc);
        
        JTextField txtemail = new JTextField(40);
        gbc.gridx = 1;
        pnmain.add(txtemail,gbc);
        
        
        //enter password
        JLabel lblpassword = new JLabel("Enter Password :- ");
        gbc.gridx = 0;
        gbc.gridy = 6;
        lblpassword.setFont(ft2);
        pnmain.add(lblpassword,gbc);
        
        JPasswordField pass1 = new JPasswordField(40);
        pass1.setEchoChar('*');
        gbc.gridx = 1;
        pnmain.add(pass1,gbc);
        
        //confirm password
        JLabel lblconfirmpass = new JLabel("Confirm Password :- ");
        gbc.gridx = 0;
        gbc.gridy = 7;
        lblconfirmpass.setFont(ft2);
        pnmain.add(lblconfirmpass,gbc);
        
        JPasswordField pass2 = new JPasswordField(40);
        pass2.setEchoChar('*');
        gbc.gridx = 1;
        pnmain.add(pass2,gbc);
        
        // Gender
        JLabel lblgender = new JLabel("Gender:- ");
        gbc.gridx = 0;
        gbc.gridy = 8;
        lblgender.setFont(ft2);
        pnmain.add(lblgender,gbc);
        
        ButtonGroup bg1 = new ButtonGroup();     
        JRadioButton rdbmale = new JRadioButton("A) Male");
        JRadioButton rdbfemale = new JRadioButton("B) Female");
        JRadioButton rdbothers = new JRadioButton("C) Others");
        bg1.add(rdbmale);
        bg1.add(rdbfemale);
        bg1.add(rdbothers);
        gbc.gridx = 1;
        pngender.add(rdbmale);
        gbc.gridwidth = 1;
        pngender.add(rdbfemale);
        pngender.add(rdbothers);
        pnmain.add(pngender,gbc);
        
        // enter date of birth
        JLabel lbldob = new JLabel("Date Of Birth :- ");
        gbc.gridx = 0;
        gbc.gridy = 9;
        lbldob.setFont(ft2);
        pnmain.add(lbldob,gbc);
        
        String days[] = {"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31"};
        String month[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
        String year[] = {"1997","1998","1999","2000","2001","2002","2003","2004","2005"};
        
        JComboBox cbdate = new JComboBox(days);
        gbc.gridx = 1;
        pndob.add(cbdate);
        JComboBox cbmonth = new JComboBox(month);
        pndob.add(cbmonth);
        JComboBox cbyear = new JComboBox(year);
        pndob.add(cbyear);
        pnmain.add(pndob,gbc);
        
        //Select Course
        JLabel lblcourse = new JLabel("Course:- ");
        gbc.gridx = 0;
        gbc.gridy = 10;
        lblcourse.setFont(ft2);
        pnmain.add(lblcourse,gbc);
        
        JComboBox cbcourse = new JComboBox();
        cbcourse.addItem("BCA-AKU");
        cbcourse.addItem("BBA-AKU");
        cbcourse.addItem("BCA-PPU");
        cbcourse.addItem("BBM-PPU");
        cbcourse.addItem("BSC_IT-PPU");
        gbc.gridx = 1;
        pnmain.add(cbcourse,gbc);
        
        
        //enter Hobbies
        JLabel lblHobbies = new JLabel("Hobbies:- ");
        gbc.gridx = 0;
        gbc.gridy = 11;
        lblHobbies.setFont(ft2);
        pnmain.add(lblHobbies,gbc);
        
        
        JCheckBox chk1 = new JCheckBox("A) Music");
        JCheckBox chk2 = new JCheckBox("B) Movies");
        JCheckBox chk3 = new JCheckBox("C) Cricket");
        gbc.gridx = 1;
        pnhobbies.add(chk1);
        pnhobbies.add(chk2);
        pnhobbies.add(chk3);
        pnmain.add(pnhobbies,gbc);
        
        //address
        JLabel lbladdress = new JLabel("Address :- ");
        gbc.gridx = 0;
        gbc.gridy = 12;
        lbladdress.setFont(ft2);
        pnmain.add(lbladdress,gbc);
        
        JTextArea txtaddress = new JTextArea(4,30);
        gbc.gridx = 1;
        pnmain.add(txtaddress,gbc);
        
        //select state
        JLabel lblstate = new JLabel("State :- ");
        gbc.gridx = 0;
        gbc.gridy = 13;
        lblstate.setFont(ft2);
        pnmain.add(lblstate,gbc);
        
        String state[] = {"Andaman and Nicobar Islands","Andhra Pradesh","Arunachal Pradesh","Assam","Bihar","Chandigarh","Chhattisgarh","Dadra and Nagar Haveli and Daman and Diu","Delhi","Goa","Gujarat","Haryana","Himachal Pradesh","Jammu and Kashmir","Jharkhand","Karnataka","Kerala","Ladakh","Lakshadweep","Madhya Pradesh","Maharashtra","Manipur","Meghalaya","Mizoram","Nagaland","Odisha","Puducherry","Punjab","Rajasthan","Sikkim","Tamil Nadu","Telangana","Tripura","Uttar Pradesh","Uttarakhand","West Bengal"};
        
        JComboBox cbstate = new JComboBox(state);
        gbc.gridx = 1;
        pnmain.add(cbstate,gbc);
        
        // pincode
        JLabel lblpin = new JLabel("Pin Code");
        gbc.gridx = 0;
        gbc.gridy = 14;
        lblpin.setFont(ft2);
        pnmain.add(lblpin,gbc);
        
        JTextField txtpin = new JTextField(10);
        gbc.gridx = 1;
        pnmain.add(txtpin,gbc);
        
        // blood group
        JLabel lblblood = new JLabel("Blood Group");
        gbc.gridx = 0;
        gbc.gridy = 15;
        lblblood.setFont(ft2);
        pnmain.add(lblblood,gbc);
        
        JComboBox cbbloodgroup = new JComboBox();
        cbbloodgroup.addItem("A +ve");
        cbbloodgroup.addItem("A -ve");
        cbbloodgroup.addItem("B +ve");
        cbbloodgroup.addItem("B -ve");
        cbbloodgroup.addItem("AB +ve");
        cbbloodgroup.addItem("AB -ve");
        cbbloodgroup.addItem("O +ve");
        cbbloodgroup.addItem("O -ve");
        cbbloodgroup.addItem("Others");
        gbc.gridx = 1;
        pnmain.add(cbbloodgroup,gbc);
        
        // terms and conditions
        JCheckBox chkterms = new JCheckBox("I Accept all the terms and conditions.");
        gbc.gridy = 16;
        chkterms.setFont(ft1);
        pnmain.add(chkterms,gbc);
            
        //sign up button
        JButton btnsignup = new JButton("SignUp");
        gbc.gridx = 1;
        gbc.gridy = 17;
        btnsignup.setFont(ft2);
        pnbutton.add(btnsignup);
        
        //Cancel Button
        JButton btncancel = new JButton("Cancel");
        btncancel.setFont(ft2);
        pnbutton.add(btncancel);
        
        //Close Button
        JButton btnclose = new JButton("Close");
        btnclose.setFont(ft2);
        pnbutton.add(btnclose);
        pnmain.add(pnbutton,gbc);
        
        // Display area
        JLabel lblresult = new JLabel("Result :- ");
        lblresult.setFont(ft1);
        lblresult.setBounds(50,20,150,30);
        pnresult.add(lblresult);
        
        JTextArea txtresult = new JTextArea();
        txtresult.setBounds(180,20,300,300);
        pnresult.add(txtresult);
        
        JLabel lblmsg1 = new JLabel("");
        lblmsg1.setBounds(50,320,400,60);
        lblmsg1.setFont(ft1);
        pnresult.add(lblmsg1);

        JLabel lblmsg2 = new JLabel("");
        lblmsg2.setBounds(50,320,400,60);
        lblmsg2.setFont(ft1);
        pnmain.add(lblmsg2);

        JScrollPane scrollPane = new JScrollPane(pnmain);
        scrollPane.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_ALWAYS);
        scrollPane.setHorizontalScrollBarPolicy(JScrollPane.HORIZONTAL_SCROLLBAR_AS_NEEDED);

        JTabbedPane tabpn1 = new JTabbedPane();
        tabpn1.addTab("Input",null,scrollPane);
        tabpn1.addTab("Result",null,pnresult);

        // event handling
        btnsignup.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                if(chkterms.isSelected())
                {
                    lblmsg1.setText("Registration Successfull.!!");
                    String uname = txtUName.getText();
                    String fname = txtFName.getText();
                    String mname = txtMName.getText();
                    String mobnum = txtmnumb1.getText();
                    String email = txtemail.getText();
                    String gender = "";
                    String hobbies = "";
                    if(rdbmale.isSelected())
                    {
                        gender = "male";
                    }
                    else if(rdbfemale.isSelected())
                    {
                        gender = "female";
                    }
                    else if(rdbothers.isSelected())
                    {
                        gender = "others";
                    }

                    String dob = cbdate.getSelectedItem()+"-"+ cbmonth.getSelectedItem()+"-"+cbyear.getSelectedItem();
                    String course = (String)cbcourse.getSelectedItem();
                    if(chk1.isSelected())
                    {
                        hobbies = "Music,";
                    }
                    if(chk2.isSelected())
                    {
                        hobbies += "Movies,";
                    }
                    if(chk3.isSelected())
                    {
                        hobbies += "Cricket";
                    }
                    String address = txtaddress.getText();
                    String state = (String)cbstate.getSelectedItem();
                    String pin = txtpin.getText();
                    String bgroup = (String)cbbloodgroup.getSelectedItem();

                    txtresult.setText("User Name :- "+uname+"\nFather's Name :- "+fname+"\nMother's Name :- "+mname+"\nGender :- "+gender+"\nDate Of Birth :- "+dob+"\nMobile Number :- "+mobnum+"\nEmail ID :- "+email+"\nBlood Group :- "+bgroup+"\nCourse :- "+course+"\nHobbies :- "+hobbies+"\nAddress :- "+address+"\nState :- "+state+"\nPin Code :- "+pin);
                    tabpn1.setSelectedIndex(1);

                }
                else
                {
                    JOptionPane.showMessageDialog(A02_swing_02.this.getParent(), "Accept the terms and conditions.!!", "Error", JOptionPane.ERROR_MESSAGE);
                }
            }  
        });
        
        btncancel.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                txtUName.setText("");
                txtFName.setText("");
                txtMName.setText("");
                txtmnumb1.setText("");
                txtemail.setText("");
                txtpin.setText("");
                pass1.setText("");
                pass2.setText("");
                txtresult.setText("");
            }    
        });
        
        btnclose.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                System.exit(0);
            }    
        });
        
        setSize(900,900);
        setVisible(true);
        setTitle("Registration Form");
        add(tabpn1);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        
    }
    
    public static void main(String args[])
    {
        A02_swing_02 obj = new A02_swing_02();
        obj.swing1();
    }
}