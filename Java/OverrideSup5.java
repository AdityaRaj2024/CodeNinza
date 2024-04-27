//WAP in JAVA to design a superclass as named product. Input Product id, Product name, quantity and price using constructor. Again Create its subclass as named Customer. Input customer id and name using constructor after that find current status of stock. 
package mypack;
import java.util.Scanner;
class Product
{
    Scanner sc = new Scanner(System.in);
    String pid,pnm;
    int qty,price;
    Product()
    {
        System.out.println("Details of Product. ");
    }
    Product(String pid, String pnm, int qty, int price)
    {
        this();
        this.pid=pid;
        this.pnm=pnm;
        this.qty=qty;
        this.price = price;
    }
    void display()
    {
        System.out.println("Product ID :-  "+pid);
        System.out.println("Product Name :-  "+pnm);
        System.out.println("Quantity :-  "+qty);
        System.out.println("Price :-  "+price);
    }
}
class Customer extends Product
{
    String cid,cnm;
    Customer(String cid,String cnm)
    {
        super("p-101","speaker",15,1200);
        this.cid=cid;
        this.cnm=cnm;
    }
    void display()
    {
        super.display();
        System.out.println("Customer Id :-  "+cid);
        System.out.println("Customer Name :-  "+cnm);
    }
}
class OverrideSup5
{
    public static void main(String args[])
    {
        Customer obj = new Customer("c-104","ABC");
        obj.display();
    }
}