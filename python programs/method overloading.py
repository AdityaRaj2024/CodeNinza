class person :
    def accept(self):
        self.name=input('Enter Name =')
        self.gender=input("Enter Gender =")
    def display(self) :
        print("Name =",self.name)
        print("Gender=",self.gender)
class student(person) :
    def accept(self):
        self.id=input('Enter Id =')
        person.accept(self)
        self.course=input("Enter Course =")
    def display(self):
        print("ID=",self.id)
        person.display(self)
        print("Course=",self.course)
stud=student()
stud.accept()
stud.display()         