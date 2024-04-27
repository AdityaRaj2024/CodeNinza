"""a=int(input("Enter First Number : "))
b=int(input("Enter Second Number : "))
add = a+b
print("Addition =",add)
try :
    div = a/b
    print("Division =",div)
except:#(ZeroDivisionError):
    print("Exception is generated here.")"""
"""l=[2,4,6,8]
try :
    for i in range(len(l)) :
        print(l[i+1])
        #print(l[i]/0)
except(Exception) :
   print("List Index Out Of Range.")
except :
    print("Exception is generated.")"""
   
"""def test( ) :
    try :
        x=x+10
        print("Value Of X =",x)
    except :
       print("Exception is generated.")
test( )
print('ok')"""      

def test( ) :
    x = 5
    try :
        x=x+10
        print("Value Of X =",x)
    except :
       print("Exception is generated.")
    #else :
        #print("No exception is generated.")
    finally :
        print("All blocks are executed.")     
test( )
#print('ok')                                  