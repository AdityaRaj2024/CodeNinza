"""#Required Arguments
def student_details(id,name,course) :
    print("ID :",id)
    print("NAME :",name)
    print("COURSE :",course)
student_details(101,"abc","BCA")
#the function simple_interest accepts three arguments and returns the simple interest accordingly    
def s_i(p,t,r):    
    return (p*t*r)/100    
p = float(input("Enter the principle = "))    
r = float(input("Enter the rate = "))
t = float(input("Enter the time = "))
si=s_i(p,r,t)
print("Simple Interest :",si)
print("Final Amount :",(p+si))

# Default Argument
def student_details(name,id=101,course='BCA') :
    print("ID :",id)
    print("NAME :",name)
    print("COURSE :",course)
student_details("abc")

def details(name,id=123):    
    print("My name is",name,"and my ID is =",id)    
details(name = "xyz")
details(id = 101,name="abc") 

#Variable-length Arguments 
def student_details(*detail) :
    for d in detail :
        print(d)
print("First Time Call :")
student_details(101)
print("Second Time Call :")
student_details(101,"abc")
print("Third Time Call :")
student_details(101,"abc",'BCA')

#Keyword arguments
def student_details(id,name,course) :
    print("ID :",id)
    print("NAME :",name)
    print("COURSE :",course)
student_details(id=101,name="abc",course="BCA")
print("After sequence change")
student_details(name="abc",course="BCA",id=101)
#student_details(101,"abc",course="BCA")

def simple_interest(p,t,r):    
    return (p*t*r)/100    
print("Simple Interest: ",simple_interest (t=10,r=10,p=1000))
def student_details(**arg):
   # print(arg)
    for d in arg.values( ):
       print (d)
#student_details(id=101)
#student_details(id=101,name="abc")
student_details(id=101,name="abc",course="BCA")"""