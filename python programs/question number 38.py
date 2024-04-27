#WAP in python to print series of Armstrong number from 100 to 999.
n=100
while(n<=999):
    num=n
    a=0
    c=0
    while(n>0):
        c+=1
        n//=10
    n=num
    while(n>0):
        r=n%10
        a=a+r**c
        n//=10
    n=num
    if(num==a):
        print(num,end=" ")
    n+=1