// Example of FileOutputStream for writing contents in file 
package mypack;
import java.io.*;
class FileOutputStream1
{
    public static void main(String[]args)
    {
        String s = "This is a FileOutputStream Program 1.";
        byte buf[] = s.getBytes();
        int i;
        try (FileOutputStream f = new FileOutputStream("File21.txt"))
        {
            for (i = 0;i < buf.length;i++)
            {
                f.write(buf[i]);
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}