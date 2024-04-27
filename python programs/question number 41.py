#WAP in python to input any number , check that number is strong or not.
n=int(input("Enter Any Number : "))
sum=0
num=n
while(n>0):
    r=n%10
    f=1
    for i in range(r,0,-1):
        f=f*i
    sum=sum+f
    n=n//10
if(num==sum):
    print(num,"is a strong number.")
else :
    print(num,"is not a strong number.")