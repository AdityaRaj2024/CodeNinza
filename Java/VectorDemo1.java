package mypack;

import java.util.*;

class VectorDemo1 {
    public static void main(String[] args) {
        Vector obj = new Vector();
        System.out.println("Size of vector is :- " + obj.size());
        obj.add(15);
        obj.addElement(13003);
        obj.addElement("ABC");
        obj.addElement(true);
        obj.add(4, 347000.00f);
        System.out.println("Size of vector is :- " + obj.size());
        System.out.println("Objects of vectors are :-");
        System.out.println(obj);
    }
}