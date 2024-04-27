class student :
    __rollno = 13  #private
    _name = 'abc' #protected
    course = 'BCA'  #public
    
    def printrecord(self):
        print("Roll No. = ",self.__rollno,"\nName = ",self._name,"\nCourse = ",self.course)
obj = student ( )
obj.printrecord( )
#print("Roll No.= " obj.__rollno) # Error
print("Name = ",obj._name)
print("Course = ",obj.course)
print("Course =",student.course)