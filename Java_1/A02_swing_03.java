//chess board programm
package Swing;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JButton;
import java.awt.Color;
import java.awt.GridLayout;

public class A02_swing_03 extends JFrame
{
    JPanel panel1,panel2;
    JButton[][] buttons;
    JButton button;
    int i,j,k,l;
    
    
    void swing2()
    {
        panel1 = new JPanel(new GridLayout(8,8));
         buttons = new JButton[8][8];
        for(i = 0; i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                button = new JButton(" ");
                if((i+j)%2==0)
                {
                    button.setBackground(Color.WHITE);
                }
                else
                {
                    button.setBackground(Color.GRAY);
                }
                panel1.add(button);
                buttons[i][j] = button;
            }
        }
        
        setSize(600,600);
        setVisible(true);
        setTitle("CHESS BOARD");
        add(panel1);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
    }
    
    public static void main(String[]args)
	{
		A02_swing_03 obj = new A02_swing_03();
        obj.swing2();
	}
}