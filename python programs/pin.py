# n=int(input("Enter Any Number :- "))
# r=n%100
# if(r>=50):
#     r=r-50
#     s=n//100
#     s=s-2
#     # print(r)
#     # print(s)
#     print("Pin :",r,s)
# else:
#     r=r+100
#     r=r-50
#     s=n//100
#     s=s-3
#     # print(r)
#     # print(s)
#     print("Pin :",s,r)


n=int(input("Enter Any Number :- "))
d = n%100
n=n//100
if(d<50):
    d=d+100
    n=n-1
d=d-50
n=n-2

if(n<10):
    if(d<10):
        print("0",d,"0",n)
elif(n<10):
    if(d>=10):
        print(d,"0",n)
elif(n>=10):
    if(d<10):
        print("0",d,n)
else:
    print(d,n)

