ap=input("enter arithmetic operator = ")
#if(ap!='-' or '+' or '*' or '/' or '%' or '//'):
  #  print('invalid operator')
n1=int(input('enter first number = '))
n2=int(input('enter second number = '))
if(ap=='+'):
    print("Addition =",(n1+n2))
elif(ap=='-'):
    print("Subtraction =",(n1-n2))
elif(ap=='*'):
    print("Multiplication =",(n1*n2))
elif(ap=='/'):
    print('Division =',(n1/n2))
elif(ap=="//"):
    print('floor division =',(n1//n2))
elif(ap=="%"):
   print("Remainder =",(n1%n2))
else:
    print("invalid operator")