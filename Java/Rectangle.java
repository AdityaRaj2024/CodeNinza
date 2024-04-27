/*
    27-04-2023
    WAP in JAVA to create two user-defined exceptions as named  "NegativeLengthException" and " NegativeBreadthException". These Exceptions must be raised if either of length or breadth is negative. Again create a class as named Rectangle to input length and breadth after that find area and perimeter of rectangle.
*/
package pack;
import java.io.*;
class NegativeLengthException extends Exception
{
    NegativeLengthException(String msg)
    {
        super(msg);
    }
}
class NegativeBreadthException extends Exception
{
    NegativeBreadthException(String msg)
    {
        super(msg);
    }
}
class Rectangle
{
    int l,b,area,peri;
    InputStreamReader isr = new InputStreamReader(System.in);
    BufferedReader br = new BufferedReader(isr);
    //BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    void getInput() throws IOException, NegativeLengthException, NegativeBreadthException
    {
        System.out.println("Enter Length & Breadth = ");
        l=Integer.parseInt(br.readLine());
        b=Integer.parseInt(br.readLine());
        if(l<0)
            throw new NegativeLengthException("Length is Negative");
        if(b<0)
            throw new NegativeBreadthException("Breadth is Negative");
    }
    void findArea()
    {
        area=l*b;
    }
    void findPeri()
    {
        peri=2*(l+b);
    }
    void showReasult()
    {
        System.out.println("Area of Rectangle :- "+area+"\nPerimeter of Rectangle :- "+peri);
    }
    public static void main(String args[])
    {
        Rectangle obj=new Rectangle();
        try
        {
            obj.getInput();
            obj.findArea();
            obj.findPeri();
            obj.showReasult();
        }
        catch(NumberFormatException e)
        {
            System.out.println("Invalid Input ");
            // System.out.println(e.getMessage());
        }
        catch(NegativeLengthException e)
        {
            System.out.println(e.getMessage());
        }
        catch(NegativeBreadthException e)
        {
            System.out.println(e.getMessage());
        }
        catch (IOException e)
        {}
        
    }
}