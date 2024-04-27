#question numbe$r 24
a=int(input("Enter first subject marks :"))
b=int(input('Enter second subjects marks :'))
c=int(input("Enter Third Subject marks :"))
d=int(input("Enter fourth subject marks :"))
e=int(input('Enter fifth subject marks :'))
f=(a+b+c+d+e)
print('Total Marks Obtained =',f)
#t=500
t=int(input("Enter Total Marks : "))
p=(f/t)*100
print('percentage=',p)
if(p>=80):
    print('Excellent')
elif(p<80 and p>=70):
    print("Very Good")
elif(p<70 and p>=60):
    print("Good")
elif(p<60 and p>=50):
    print('Average')
else:
     print("Fail")
print("OK")