package mypack;
class Person
{
    void showDetails()
    {
        System.out.println("In the Person class");
    }
}
class Employee extends Person
{
    void showDetails()
    {
        super.showDetails();
        System.out.println("In the Employee class");
    }
}
class OverrideSup2
{
    public static void main(String args[])
    {
        Employee emp = new Employee();
        emp.showDetails();
    }
}