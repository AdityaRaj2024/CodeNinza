"""import threading
def find_squre(num):
    for n in num :
        print("squre of ",n,'=',n*n)
def find_cube(num):
    for n in num :
        print("cube of ",n,'=',n*n*n) 
arr=[1,2,3,4,5]
t1=threading.Thread(target=find_squre,args=(arr,))
t2=threading.Thread(target=find_cube,args=(arr,))
t1.start( )
t2.start( ) """

import threading
import time
def find_squre(num):
    for n in num :
        time.sleep(0.3)
        print("squre of ",n,'=',n*n)
def find_cube(num):
    for n in num :
        time.sleep(0.3)
        print("cube of ",n,'=',n*n*n) 
arr=[1,2,3,4,5]
t1=threading.Thread(target=find_squre,args=(arr,))
t2=threading.Thread(target=find_cube,args=(arr,))
t1.start( )
t2.start( )
#find_squre(arr)
#find_cube(arr)
print(time.time( ))
print("Hello")


"""import threading
import time
def find_squre(num):
    for n in num :
        time.sleep(0.3)
        print("squre of ",n,'=',n*n)
def find_cube(num):
    for n in num :
        time.sleep(0.3)
        print("cube of ",n,'=',n*n*n) 
arr=[1,2,3,4,5]
#t1=threading.Thread(target=find_squre,args=(arr,))
#t2=threading.Thread(target=find_cube,args=(arr,))
#t1.start( )
#t2.start( )
find_squre(arr)
find_cube(arr)
print(time.time( ))"""