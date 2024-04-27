#Global Variable
n=25
def number1( ):
    global n
    n+=15
    print("Value of number1 variable =",n)
    
def number2( ):
   print("Value of number2 variable =",n)
   
def number3( ):
   global n
   n=n+18
   print("Value of number3 variable =",n)
      
number1( )
number2( )
number3( )

#Local Variable
def number1( ):
    n=15
    print("Value of number1 variable =",n)
    
def number2( ):
   n=28
   print("Value of number2 variable =",n)
   
number1( )
number2( )   