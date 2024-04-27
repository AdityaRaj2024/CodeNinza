//final keyword example in java - with variable
package mypack;
class FnlCircle
{
    public static void main(String[] args)
    {
        // Constant variable to store the value of pi
        final float PI = 3.142f;
        // Radius of the circle
        //PI = 4.2f; //gives compile time error    
        int r = 4;
        // Calculate and display the area of the circle
        System.out.println("Area of circle :-  " + (PI * r*r));
    }
}