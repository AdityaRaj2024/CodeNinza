package mypack;
import java.util.*;
class ArrayList1
{
    public static void main(String[] args) 
    {
        ArrayList<String> al = new ArrayList<String>();
        System.out.println("Size of ArrayList is :- " + al.size());
        //System.out.println("Capacity of ArrayList is :- " + al.capacity());
        al.add("18");
        al.add("13153");
        al.add("XYZ");
        al.add("false");
        al.add("BCA");
        al.add(2, "307000.00");
        System.out.println("Size of New ArrayList is :- " + al.size());
        //System.out.println("Capacity of New ArrayList is :- " + al.capacity());
        System.out.println("Objects of ArrayList are :-");
        System.out.println(al);
    }
}