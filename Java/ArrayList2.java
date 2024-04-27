package mypack;
import java.util.*;
class ArrayList2
{
    public static void main(String[] args) 
    {
        ArrayList lst = new ArrayList();
        System.out.println("Size of ArrayList is :- " + lst.size());
        lst.add(235);
        lst.add(8.45);
        lst.add("PQR");
        lst.add(true);
        lst.add("BCA");
        lst.add(2, 307000.00f);
        System.out.println("Size of New ArrayList is :- " + lst.size());
        System.out.println("Objects of ArrayList are :-");
        System.out.println(lst);
    }
}