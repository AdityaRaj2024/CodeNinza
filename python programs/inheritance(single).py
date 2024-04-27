"""class A :
    def display(self) :
        print("A Class Method")
class B(A):
    def disp(self) :
        self.display( )
        print("B Class Method")   
b=B( )
b.disp( ) """
class person :
    def accept(self) :
        self.name = input("Enter Name : ")
        self.gender = input("Enter Gender : ")
    def display(self) :
        print('Name =',self.name)
        print('Gender =',self.gender)
class employee(person) :
    def get_data(self) :
        self.accept( )
        self.id=input("Enter Id : ")
        self.post=input("Enter Post : ")
        self.salary= float(input("Enter Salary : "))
    def disp(self) :
        self.display( )
        print('ID =',self.id)
        print('Post =',self.post)
        print('Salary =',self.salary)
emp=employee ( )
emp.get_data ( )
emp.disp( )     