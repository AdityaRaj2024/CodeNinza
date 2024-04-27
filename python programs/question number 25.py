#question no.25
age=int(input("Enter age = "))
if(age<18):
    print("invalid age")
else:
     c_name=input("enter country name =")
     c_name=c_name.upper()
     if(age>=18):
         if(c_name=="INDIA"):
             print('eligible for voting') 
         else:
             print("invalid country name")