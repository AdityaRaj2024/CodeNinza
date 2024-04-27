//WAP in java to append data to a file
package mypack;
import java.io.*;
class FileWriterApp
{
    public static void main(String args[]) throws IOException
    {
        DataInputStream ds = new DataInputStream(System.in);
        int i;
        String s;
        try (FileWriter fw = new FileWriter("File22.txt",true))
        {
            System.out.println("Enter Value to be printed. :- ");
            s=ds.readLine();
            byte bt[] = s.getBytes();
            for (i = 0;i < bt.length;i++)
            {
                fw.write(bt[i]);
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}