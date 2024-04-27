class Employee :
    def getinput(self) :
        self.empid=input("Enter Employee Id : = ")
        self.name=input("Enter Name : = ")
        self.post=input("Enter Post : = ")
        self.salary=float(input("Enter Salary : = "))
    def showrecord (self):
         print("Employee Id = ",self.empid,"\nName= ",self.name,"\nPost= ",self.post,"\nSalary= ",self.salary)
ob=Employee( )
ob.getinput( )
ob.showrecord( )
#print("Employee id= ",ob.empid)