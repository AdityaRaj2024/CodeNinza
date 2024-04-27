//WAP in java to read the same file using fileinputstream class
package mypack;
import java.io.*;
class FileInputStream1
{
    public static void main(String[]arg)
    {
        int i;
        try (FileInputStream f = new FileInputStream("FileInputStream1.java"))
        {
            // while ((i=f.read())!=-1) //read file in byte form
            // {
                // System.out.print(i+" "); 
            // }
            while ((i=f.read())!=-1) //read file in character form
            {
                System.out.print((char)i); 
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}