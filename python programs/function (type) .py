#Not return type without argument
def add ( ):
    a=18
    b=27
    print("Addition of two numbers :",a+b)
add( )

#  Not return type with argument
def mult(a,b) :
    print("Multiplication of two numbers :",a*b)
a=int(input("Enter First Number:"))    
b=int(input("Enter Second Number:"))
mult(a,b)

# Not return type without argument
def sub():
    a = 80
    b = 30
    print("Subtraction Of two numbers:", a-b)
sub()    
#for i in range(2):
  #  sub()
  
# Return type without argument
def div ( ):
    a = 1000
    b = 25
    c = a / b
    return c
print("Division = :",div()) 

# Return type with argument
def add(x,y):
    a=x+y
    return a
#b=add(12,28)
print("Addition =",add(12,56))