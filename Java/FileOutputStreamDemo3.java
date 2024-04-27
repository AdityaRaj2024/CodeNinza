/*
    25-05-2023
    Example of FileOutputStream 
    for writing contents in file :- using append
*/
// package mypack;
import java.io.*;
class FileOutputStreamDemo3
{
    public static void main(String args[]) throws IOException
    {
        DataInputStream ds = new DataInputStream(System.in);
        String s;
        System.out.println("Enter Any Content.");
        s=ds.readLine();
        byte buf[] = s.getBytes();
        try (FileOutputStream fos = new FileOutputStream("D:\\Files\\File2.txt ",true))//true is used for appending 
        {
            for (int i = 0; i < buf.length; i++)
            {
                fos.write(buf[i]);
            }
        }
        catch (Exception e)
        {
            System.out.println(e);
        }
    }
}