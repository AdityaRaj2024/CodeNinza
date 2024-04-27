def factorial(n) :
    if(n==1 or n==0) :
        return 1
    else :
        return(n*factorial(n-1))
n=int(input("Enter Value For Factorial :")) 
x=factorial(n)
print('Factorial of {}={}'.format(n,x))

def fibo(n):
    if(n<=1):
        return n
    else :
        return(fibo(n-1)+fibo(n-2))
terms=18
for i in range(terms):
    print(fibo(i))               