def range (a):
    m=int(input("Enter First Number : "))
    n=int(input("Enter Second Number : "))
    if (m<a<n or m>a>n):
        print(a,"is between m and n")
    else :
        print(a,"is not between m and n")
a=int(input("Enter Any Number : "))
range(a)