def reverse(n):
    rev=0
    while(n>0):
        r=n%10
        rev=rev*10+r
        n//=10
    print("Reverse no.=",rev)

def digit_add(n):
    sum=0
    while(n>0):
        r=n%10
        sum+=r
        n//=10
    return sum
    
num=int(input("Enter Any Number : "))
reverse(num)
s=digit_add(num)
print("Sum Of Digits :",s)

print("\n")
def sum():  # Defining function
    a = 10  
    b = 20  
    c = a+b  
    return c  
# calling sum() function in print statement
print("The sum is:",sum())

print("\n")
def sum():  # Defining function 
    a = 10  
    b = 20  
    c = a+b  
# calling sum() function in print statement
print("The Sum is :",sum())

print("\n")
def display(l1):
    for i in l1:
        print(i)
x=[10,20,"python",True]
display(x)

print("\n")
def display(l1):
    for i in l1:
        print(i)
        return
x=[10,20,"python",True]
display(x)                                                                                                                                                    