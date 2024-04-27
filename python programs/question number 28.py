#question number 28
n=input("Enter Shoe Company Name= ")
p=int(input("Enter Shoe Price= "))
n=n.lower()
if(n=='nike'):
    if(p>=5000):
        d=((p*10)/100)
    else:
        d=((p*8)/100)
    print("Discount=",d)
    print("Payable amount=",(p-d))
elif(n=="reebok"):
    if(p>=6000):
        d=((p*15)/100)
    elif(p>=3000 and p<6000):
        d=((p*10)/100)
    else:
        d=((p*7)/100)
    print("Discount=",d)
    print("Payable Amount=",(p-d))
else:
    print("Invalid Details")
print("Ok")