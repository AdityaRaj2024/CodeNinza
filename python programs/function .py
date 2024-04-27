rollno = None
name = None
course = None
fee = None
def get_input ( ):
    global rollno,name,course,fee
    rollno = input("Enter Roll No. : ")
    name = input("Enter Name : ")
    course =  input("Enter Course : ")
    fee = float(input("Enter Fee : "))
 
def show_records( ):
    print("Roll No.= ",rollno,"\n Name = ",name,"\n Course =",course, "\n Fee = ",fee)
    
get_input( )
show_records ( )