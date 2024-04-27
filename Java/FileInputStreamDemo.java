//24-05-2023
//Example of File Handling :- using FileInputStream;
//read file in byte form
package mypack;
// import java.io.FileInputStream; //read file in byte form
// import java.io.IOException;
import java.io.*;
public class FileInputStreamDemo
{
    public static void main(String[] args)
    {
        int i;
        char c;
        try (FileInputStream f = new FileInputStream("D:\\Files\\File1.txt"))
        {
            while ((i = f.read()) != -1) // -1 is a indicator that represent end of file
            {
                c = (char) i;
                System.out.print(c);
                //System.out.print(i+"\t"); //read file in byte form
            }
        }
        catch (IOException ex)
        {
            System.out.println(ex);
            //System.out.println("File Not Found. "+ex);
        }
    }
}