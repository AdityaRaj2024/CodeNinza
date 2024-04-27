//WAP in java to copy a file content into another file.
package mypack;
import java.io.*;
class FileCopy
{
    // FileReader in = new FileReader("FileStd.txt");
    // FileWriter out = new FileWriter("File3.txt");
    FileCopy() 
    {
        String str = "";
        int i;
        try(FileReader in = new FileReader("FileStd.txt");FileWriter out = new FileWriter("File3.txt"))
        {
            while((i=in.read())!=-1)
            {
                str=str+(char)i;
            }
            System.out.println(str);
            out.write(str);
            // in.close();
            // out.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
class FileWriterCpy
{
    public static void main(String[]args) 
    {
        FileCopy fc = new FileCopy();
    }
}