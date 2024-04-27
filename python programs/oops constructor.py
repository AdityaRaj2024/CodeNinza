"""class student :
    def __init__(self,stud_id,stud_name,course,fees) :
        self.stud_id=stud_id
        self.stud_name=stud_name
        self.course=course
        self.fees=fees
        
    def dispData(self) :
       print(".......Student Details.........")
       print("Student ID =",self.stud_id)
       print("Student Name =",self.stud_name)
       print("Student Course =",self.course)
       print("Student Fee =",self.fees)
       
stud1=student(101,"xyz","BCA",360000)
stud1.dispData( )   

stud2=student(102,"abc","BBA",350000)
stud2.dispData( )
class Student:  
    # Constructor - non parameterized  
    def __init__(self):  
        print("This is non parametrized constructor")  
    def show(self,name):  
        print("Hello",name)  
st = Student()  
st.show("abc")  
class Student:  
    # Constructor - parameterized  
    def __init__(self, name):  
        print("This is parametrized constructor")  
        self.name = name  
    def show(self):  
        print("Hello",self.name)  
st = Student("abc")  
st.show()    
st1 = Student("xyz")
st1.show( ) 
class Student:  
    roll_num = 101  
    name = "abc"  
    def display(self):  
        print(self.roll_num,self.name)  
st = Student()  
st.display()  """
class Student:  
    def __init__(self):  
        print("The First Constructor")  
    def __init__(self):  
        print("The second contructor")  
    def __init__(self):  
        print("The Third contructor")
st = Student()  