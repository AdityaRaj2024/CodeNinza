//WAP to implement method overriding
package mypack;
class Person
{
    public void showDetails()
    {
        System.out.println("In the Person class");
    }
}
class Employee extends Person
{
    public void showDetails()
    {
        super.showDetails();
        System.out.println("In the Employee class");
    }
}
class Student extends Person
{
    public void showDetails()
    {
        System.out.println("In the Student class");
    }
}
class Override1
{
    public static void main(String args[])
    {
        // Person P = new Person();
        Employee E = new Employee();
        // Student S = new Student();
        // Person ref;
        // ref = P;
        // ref.showDetails(); // calls the showDetails method of the Person class
        // P.showDetails(); // calls the showDetails method of the Person class
        // ref = E;
        // ref.showDetails(); // calls the showDetails method of the Employee class
        E.showDetails(); // calls the showDetails method of the Employee class
        // ref = S;
        // ref.showDetails();// calls the showDetails method of the Student class
        // S.showDetails();// calls the showDetails method of the Student class
    } 
}