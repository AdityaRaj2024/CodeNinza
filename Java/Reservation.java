/*
    This is Exercise 3 --> 19-04-2023
*/
package mypack;
class Reservation
{
    public static void main(String args[])
    {
        int a=5,i;
        i=++a + ++a + a++;
        a=5;
        i=a++ + ++a + ++a;
        a=5;
        a=++a + ++a + a++;
        System.out.println(a);
        System.out.println(i);
    }
}