//22-11-2023

package mypack1;
import javax.swing.JFrame;
import javax.swing.JMenuBar;
import javax.swing.JMenu;
import javax.swing.JMenuItem;
public class MenuDemo1 extends JFrame
{
    JMenuBar menubar;
    JMenu fileMenu,editMenu,exitMenu;
    JMenuItem openItem,saveItem, cutItem,copyItem,pasteItem,closeItem;
    
    public MenuDemo1()
    {
        menubar = new JMenuBar();
        setJMenuBar(menubar);
        
        fileMenu = new JMenu("File");
        editMenu = new JMenu("Edit");
        exitMenu = new JMenu("Exit");
        
        openItem = new JMenuItem("open");
        saveItem = new JMenuItem("save");
        cutItem = new JMenuItem("cut");
        copyItem = new JMenuItem("copy");
        pasteItem = new JMenuItem("paste");
        closeItem = new JMenuItem("close");
        
        fileMenu.add(openItem);
        fileMenu.add(saveItem);
        editMenu.add(cutItem);
        editMenu.add(copyItem);
        editMenu.add(pasteItem);
        exitMenu.add(closeItem);
                
        menubar.add(fileMenu);
        menubar.add(editMenu);
        menubar.add(exitMenu);
        
        setTitle("Menu Demo");
        setSize(800,600);
        setVisible(true);
        
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //used to close the window and to exit without pressing Ctrl + c
    }
    public static void main(String[] args)
    {
        MenuDemo1 md = new MenuDemo1();
    }
}