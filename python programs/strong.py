from tkinter import *
from tkinter import messagebox
from tkinter import simpledialog
root=Tk( )
root.geometry("4x5")
messagebox.showinfo("check Strong")
a=simpledialog.askinteger("Number","Enter Number")
#n=int(input("Enter Any Number : "))
sum=0
num=a
while(a>0):
    r=a%10
    f=1
    for i in range(r,0,-1):
        f=f*i
    sum=sum+f
    a=a//10
if(num==sum):
    #print(num,"is a strong number.")
    messagebox.showinfo("Strong Or Not",str(num)+"Number Is Strong" )
    #messagebox.showinfo("Strong Or Not", +str(num) "Number Is Strong")
    
else :
    #print(num,"is not a strong number.")
    messagebox.showinfo("Strong Or Not",str(num)+"Number is not strong" )
#messagebox.showinfo("Strong Or Not","Number Is Strong" +str(a))
root.mainloop( )   