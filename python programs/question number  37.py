#37. WAP in python to input any number , check that number is Armstrong or not.
n=int(input("Enter Any Number :"))
num=n
a=0
c=0
while(n>0):
    c+=1
    n//=10
n=num
print ("count of digits =",c)
while(n>0):
    r=n%10
    a=a+r**c
    n//=10
if(num==a):
    print(num,"is armstrong")
else:
    print(num,"is not armstrong")