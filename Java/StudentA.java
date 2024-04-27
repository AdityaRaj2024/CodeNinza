/*Wap in JAVA to input roll no,name and marks of four subject after that find total marks , percentage , marks and remark according to given condition. - use DataInputStream
    1) if %>=90 then remark = excellent
    2) if %>=75 and %<90 then remark = very good
    3) if %>=60 and %<75 then remark = good
    4) if %<90 then remark = poor
    
*/
package mypack;
import java.io.*;
class StudentA
{
    static public void main(String args[]) throws IOException
    {
        int roll,total,i;
        float per;
        int m [] = new int [5];
        String name,remark;
        DataInputStream ds = new DataInputStream(System.in);
        System.out.println("Enter Roll no & Name = ");
        roll = Integer.parseInt(ds.readLine());
        name = ds.readLine();
        //m=0;
        total=0;
        for(i=0;i<5;i++)
        {
            System.out.print("Enter Marks of subject "+(i+1)+" = ");
            m[i] =  Integer.parseInt(ds.readLine());
            total=total+m[i];
        }
         per=total/5;
         if(per>=90)
             remark="Excellent.";
         else if(per<90 && per>=75)
             remark="Very Good.";
         else if(per<75 && per>=60)
             remark="Good.";
         else
             remark="Poor";
         System.out.println("\n*********Details of Students.***************");
         System.out.println("Roll Number = "+roll+"\nName = "+name+"\nTotal Marks = "+total+"\nPercentage :- "+per+"%"+"\nRemark = "+remark);
    }
}