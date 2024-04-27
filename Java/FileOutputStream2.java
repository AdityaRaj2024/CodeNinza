// Example of FileOutputStream for writing contents in file - during run time
package mypack;
import java.io.*;
class FileOutputStream2
{
    public static void main(String args[])
    {
        DataInputStream ds = new DataInputStream(System.in);
        int i;
        String s;
        // byte bt[];
        try (FileOutputStream f = new FileOutputStream("File2.txt",true))
        {
            System.out.println("Enter Value to be printed. :- ");
            s=ds.readLine();
            byte bt[] = s.getBytes();
            for (i = 0;i < bt.length;i++)
            {
                f.write(bt[i]);
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}