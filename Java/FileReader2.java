//24-05-2023
//for Reading File Content
//Example of File Handling :- using FileReader class;
package mypack;
// import java.io.FileReader; //read file in character form
// import java.io.IOException;
import java.io.*;
public class FileReader2
{
    public static void main(String[] args)
    {
        try (FileReader f = new FileReader("D:\\Files\\File.txt"))
        {
            char a[] = new char[150];
            f.read(a);
            for(char c : a)
            {
                 System.out.print(c);
            }
        }
        catch (Exception e)
        {
            System.out.println(e);
        }
    }
}