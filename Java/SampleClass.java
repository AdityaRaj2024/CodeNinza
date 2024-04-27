/*
    This is Exercise 2 --> 19-04-2023
*/
package mypack;
class SampleClass
{
    int counter=1;
    void Display()
    {
        System.out.println(counter);
        //Counter++;
    }
    public static void main(String[] args)
    {
        SampleClass  sc = new SampleClass();
        sc.Display();
        sc.Display();
    }
}
