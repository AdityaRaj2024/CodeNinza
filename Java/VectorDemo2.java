package mypack;

import java.util.*;

class VectorDemo2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, i;
        System.out.print("Enter Size of Vector = ");
        n = sc.nextInt();
        Vector obj = new Vector(n);
        System.out.println("Size of vector is :- " + obj.size());
        System.out.println("Add Elements :- ");
        for (i = 0; i < n; i++) {
            obj.addElement(sc.next());
        }
        System.out.println("Size of vector is :- " + obj.size());
        System.out.println("Objects of vectors are :-");
        System.out.println(obj);
    }
}