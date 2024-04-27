def factorial (n):
    f=1
    for i in range(n,0,-1):
        f=f*i
    print('factorial of',n,"=",f)
n=int(input("Enter Any Number :"))
factorial(n)