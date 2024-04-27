package mypack1;
import javax.swing.JFrame;
import javax.swing.JOptionPane;

class OptionPane1 extends JFrame
{
    public OptionPane1()
    {
        setVisible(true);
        setSize(150,100);
        JOptionPane.showConfirmDialog(this,"Do You Want TO Save It?","Confirmation Message",JOptionPane.YES_NO_CANCEL_OPTION,JOptionPane.WARNING_MESSAGE);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public static void main(String[] args) {
        OptionPane1 op = new OptionPane1();
    }
}