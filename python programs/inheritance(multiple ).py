# Parent class 1
class Company:
    def company(self):
        self.nam = input("Enter Company Name : ")
        self.loct = input("Enter Location : ")
    def display(self) :
        print('Company Name =',self.nam)
        print('Company Location =',self.loct)  
# Parent class 2        
class Person :
    def person (self) :
        self.name = input("Enter Employee Name : ")
        self.gender = input("Enter Gender : ")
    def accept(self) :
        print('Employee Name =',self.name)
        print('Gender =',self.gender)
# Child class        
class employee(Company , Person) :
    def get_data(self) :
        #self.accept( )
        self.id=input("Enter Id : ")
        self.post=input("Enter Post : ")
        self.salary= float(input("Enter Salary : "))
    def disp(self) :
        self.display( )
        self.accept( )
        print('ID =',self.id)
        print('Post =',self.post)
        print('Salary =',self.salary)
emp=employee ( )
emp.company( )
emp.person( )
#emp.employee( )
emp.get_data ( )
emp.disp( )        