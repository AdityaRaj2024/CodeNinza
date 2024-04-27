package mypack;
class Person
{
    Person(String s)
    {
        System.out.println("Person class Constructor "+s);
    }
}
class Employee extends Person
{
    Employee()
    {
        super("ABC");
        System.out.println("Employee class Constructor. ");
    }
}
class OverrideSup3
{
    public static void main(String args[])
    {
        Employee emp = new Employee();
    }
}