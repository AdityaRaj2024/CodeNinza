'''class student :
    def accept(self,id,name,course) :
        self.id=id
        self.name=name
        self.course=course
        
    def display(self) :
        print("Student ID =",self.id)
        print("Student Name =",self.name)
        print("Student Course =",self.course)
        
s1=student( )
s1.accept(101,"abc",'BCA')
s1.display( )

s2=student( )
s2.accept(102,"xyz",'BBA')
s2.display( )

s3=student( )
s3.accept(103,"jkl",'BBA')
s3.display( )

s4=student( )
s4.accept(104,"pqr",'BCA')
s4.display( ) '''
class rectangle :
    def getdata (self) :
        self.length=int(input("Enter length ="))
        self.breadth=int(input("Enter Breadth ="))
    def disp(self) :
         print('Area Of Rectangle =',(self.length*self.breadth))
         print('Perimeter Of Rectangle =',(2*(self.length+self.breadth)))
r=rectangle( )
r.getdata( )
r.disp( )       