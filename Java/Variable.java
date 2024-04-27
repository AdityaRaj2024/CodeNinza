//Example of Local , Global and static variable
package mypack;
class Variable 
{
    String name; // Instance Variable;
    static int c; // static variable

    void getDetail() 
    {
        int id; // Local variable;
        name = "Ankit";
        id = 1414;
        c++;
        System.out.println("Number " + c);
        System.out.println("Name :- " + name);
        System.out.println("ID :- " + id);
    }

    void getDetails() 
    {
        int id; // Local variable;
        name = "Amit";
        id = 2359;
        c++;
        System.out.println("\nNumber " + c);
        System.out.println("Name :- " + name);
        System.out.println("ID :- " + id);
    }

    public static void main(String[] args) 
    {
        Variable one = new Variable();
        one.getDetail();
        one.getDetails();
    }
}