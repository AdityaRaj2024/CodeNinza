/*
    25-05-2023
    Example of FileOutputStream 
    for writing contents in file :- using append
*/
// package mypack;
import java.io.*;
class FileOutputStreamDemo2
{
    public static void main(String[] args) throws IOException
    {
        boolean bool;
        long pos;
        String s = "\nThis is a FileOutputStream Program Number 2";
        byte buf[] = s.getBytes();
        try (FileOutputStream fos = new FileOutputStream("D:\\Files\\File.txt ",true))//true is used for appending 
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