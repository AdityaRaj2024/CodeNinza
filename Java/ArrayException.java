/*
    wap to input 10 numbere after that find gretest number, implement the concept of exception handling.
    21-04-2023
*/
package pack;
import java.io.*;
class ArrayException
{
    public static void main(String...args)
    {
        int size,i,gt;
        DataInputStream ds=new DataInputStream(System.in);
        try
        {
            System.out.println("Enter Size of Array = ");
            size=Integer.parseInt(ds.readLine());
            int a[]=new int [size]; //declaring array variable
            System.out.println("Enter "+size+" numbers :-");
            for(i=0;i<a.length;i++)
            {
                a[i]=Integer.parseInt(ds.readLine());
            }
            gt=a[0];
            System.out.println("All Elements Are =");
            for(i=0;i<a.length;i++)
            {
                System.out.println(a[i]);
                if(a[i]>gt)
                    gt=a[i];
            }
            System.out.println("Greatest Number "+gt);
        }
        catch(NegativeArraySizeException e)
        {
            System.out.println("Error! Negative Size of Array ");
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Error! Invalid Index value ");
        }
        catch(NumberFormatException e)
        {
            System.out.println("Error! Invalid Input ");
        }
        catch(IOException e)
        {

        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        finally
        {
            System.out.println("Thanks");
        }
    }
}
