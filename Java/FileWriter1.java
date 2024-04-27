//WAP in JAVA to add student's details in a file - using FileWriterClass
package mypack;
import java.io.*;
class FileWriterStudent
{
    FileWriterStudent() throws IOException
    {
        DataInputStream ds = new DataInputStream(System.in);
        int i;
        String nm,id,m_no;
        System.out.println("Enter ID, Name & Mobile Number of Student :- ");
        id=ds.readLine();
        nm=ds.readLine();
        m_no=ds.readLine();
        String s ="\nId\t\tName\t\tMobile Number\n";
        byte bt1[] = s.getBytes();
        byte bt2[] = id.getBytes();
        byte bt3[] = nm.getBytes();
        byte bt4[] = m_no.getBytes();
        try (FileWriter f = new FileWriter("FileStd.txt"))
        {
            for (i = 0;i < bt1.length;i++)
            {
                f.write(bt1[i]);
            }
            for (i = 0;i < bt2.length;i++)
            {
                f.write(bt2[i]);
            }
            f.write("\t\t");
            for (i = 0;i < bt3.length;i++)
            {
                f.write(bt3[i]);
            }
            f.write("\t\t");
            for (i = 0;i < bt4.length;i++)
            {
                f.write(bt4[i]);
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}

class FileWriter1
{
    public static void main(String[]arg) throws IOException
    {
        FileWriterStudent std = new FileWriterStudent();
    }
}