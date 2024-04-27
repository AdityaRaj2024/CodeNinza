package mypack;
class Student
{
    String name;
    int marks;
    Student (String stuName) {
    name = stuName ;
}
void setMarks(int stuMar) 
{
    marks = stuMar ;
}
// This method prints the student details.
void printStudent() 
{
    System.out.println("Name: " + name );
    System.out.println("Marks:" + marks);
}
public static void main(String args[]) 
{
    Student StudentOne= new Student("Ankit");
    Student StudentTwo= new Student("Akshat");
    Student StudentThree= new Student("Vikram");
    StudentOne.setMarks(98);
    StudentTwo.setMarks(89);
    StudentThree.setMarks(90);
    StudentOne.printStudent();
    StudentTwo.printStudent();
    StudentThree.printStudent();
}
}