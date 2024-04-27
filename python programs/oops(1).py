class student :
    id = 101
    name = "abc"
    course = 'BCA'
    def display (self) :
        print("Student ID =",self.id)
        print("Student Name =",self.name)
        print("Student Course =",self.course)
st = student ( )
st.display( ) 

st2=student ( )
st2.id=102
st2.name="xyz"
st2.course="BBA"
st2.display( ) 
