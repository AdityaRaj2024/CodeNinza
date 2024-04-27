package mypack1;
import java.util.Scanner;
import javax.swing.JOptionPane;
import javax.swing.ImageIcon;

public class show_InputDialog
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        ImageIcon icon = new ImageIcon();
        Object[] options = {2,"No",5.6,true};
        // object[] options = sc.object();
        Object l = JOptionPane.showInputDialog(null,"Just Pick something alreday !","Mix & Match", JOptionPane.ERROR_MESSAGE,icon,options,options[0]);
        
        if(l instanceof Integer)
        {
            System.out.println("You Picked An Integer");
        }
        else if(l instanceof String)
        {
            System.out.println("You Picked An String");
        }
        else if(l instanceof Double)
        {
            System.out.println("You Picked An Double");
        }
        else if(l instanceof Boolean)
        {
            System.out.println("You Picked An Boolean");
        }
    }
}