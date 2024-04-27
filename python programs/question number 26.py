#question no. 26
S=float(input("Enter salary="))
T=input("Enter employee type=")
T=T.lower()
if(T=="regular"):
    if(S>=50000):
        B=S*15/100
    if(S<50000):
        B=S*9/100
    print('Bonus=',B)     
elif(T=="visiting"):
      if(S>=50000):
          B=S*10/100
      if(S<50000):
          B=S*6/100
      print("Bonus =",B)
else:
    print('invalid details')