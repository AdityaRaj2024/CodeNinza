age=int(input("enter your age:"))
c_name=input("enter your country name :")
c_name=c_name.upper()
if(age>=18):
    if(c_name=='INDIA'):
        print("you are eligible for voting")
    else:
        print("invalid country name")
elif(age<18):
    print("you are not eligible for voting")
else:
    print("invalid")