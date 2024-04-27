package mypack;
import java.util.*;
class VectorDemo 
{
    public static void main(String[] args) 
    {
        Vector objt = new Vector();
        String str = new String("Aditya");
        Integer id = new Integer(13051);
        Double fee = new Double(347000.00);
        System.out.println("Size of vector is :- " + objt.size());
        objt.add(str);
        objt.add(id);
        objt.add(fee);
        objt.add("BCA");
        System.out.println("Size of new vector is :- " + objt.size());
        System.out.println("Objects of vectors are :-");
        System.out.println(objt);
    }
}