#WAP in python to input any number , find factorial of that number
n=int(input("Enter Any Number : "))
f=1
for i in range(n,0,-1):
    f=f*i
print('factorial of',n,"=",f)   