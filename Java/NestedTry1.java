/*
 * WAP in JAVA to input 10 numbers after that find sum and average.Implement Nested try block.
 */
package pack;
import java.io.*;
class NestedTry1 
{
    public static void main(String[] args) 
    {
        DataInputStream ds = new DataInputStream(System.in);
        try 
        {
            System.out.print("Enter Size of Array :- ");
            int s = Integer.parseInt(ds.readLine());
            int a[] = new int[s];
            int sum = 0, avg, i;
            System.out.println("Enter " + s + " Number's =");
            for (i = 0; i < s; i++) 
            {
                a[i] = Integer.parseInt(ds.readLine());
                sum = sum + a[i];
            }
            try 
            {
                avg = sum / s;
                //avg = sum / 0; //generate ArithmeticException
                System.out.println("Sum :- " + sum + "\nAverage :- " + avg);
            } 
            catch (ArithmeticException e) 
            {
                System.out.println("Divided by zero. " + e);
            }
        } 
        catch (IOException e) 
        {}
        catch (ArrayIndexOutOfBoundsException e) 
        {
            System.out.println("Invalid Index value. " + e.getMessage());
        } 
        catch (NegativeArraySizeException e) 
        {
            System.out.println("Negative Length. " + e);
        } 
        catch (NumberFormatException e) 
        {
            System.out.println("Invalid Input. " + e);
        }
        catch(Exception e)
        {
            System.out.println("Error!"+e);
        }
    }
}