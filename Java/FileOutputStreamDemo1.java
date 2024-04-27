/*
    25-05-2023
    Example of FileOutputStream for writing contents in file
*/
//package mypack;
import java.io.*;
class FileOutputStreamDemo1
{
    public static void main(String[] args) throws IOException
    {
        boolean bool;
        long pos;
        String s = "This is a FileOutputStream Program1";
        byte buf[] = s.getBytes();
        try (FileOutputStream fos = new FileOutputStream("D:\\Files\\File.txt "))
        {
            for (int i = 0; i < buf.length; i++)
            {
                fos.write(buf[i]);
            }
        }
        catch (Exception e)
        {
            System.out.println("File Not Found. "+e);
        }
    }
}