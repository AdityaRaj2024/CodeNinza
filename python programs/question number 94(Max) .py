def max(a,b,c):
    if (a>b and a>c):
        print(a,"is the max of three numbers")
    elif(b>c):
        print(b,"is the max of three numbers")
    else :
        print(c,"is the max of three numbers")
a=int(input("Enter First Number : "))
b=int(input("Enter Second Number : "))
c=int(input("Enter Third Number : "))
max(a,b,c)