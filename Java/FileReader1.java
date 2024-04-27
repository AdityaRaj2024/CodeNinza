//Example of File Handling to print itself - using Class.
package mypack;
import java.io.*;
class FileReader1
{
    public static void main(String args[])
    {
        try (FileReader f = new FileReader("FileReader1.java"))
        {
            int i;
            while ((i=f.read())!=-1)
            {
                 System.out.print((char)i);
            }
        }
        catch (Exception e)
        {
            System.out.println(e);
        }
    }
}