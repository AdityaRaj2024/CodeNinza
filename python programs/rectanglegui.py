from tkinter import*
root=Tk()
#root.geometry('400*600')
root.title('Window')
root.configure(bg='cyan')
def Area():
    l=int(txtlen.get())
    b=int(txtbread.get())
    a=l*b
    txtresult.insert(0,a)
    
def Peri():
    l=int(txtlen.get())
    b=int(txtbread.get())
    p=2*(l+b)
    txtresult.insert(0,p)
    
def Reset():
    txtlen.delete(0,END)
    txtbread.delete(0,END)
    txtresult.delete(0,END)
    txtlen.focus()
    
lbllen=Label(root,text="Length")
lblbread=Label(root,text="Breadth")
lblresult=Label(root,text="Result")
txtlen=Entry(root)
txtbread=Entry(root)
txtresult=Entry(root)




#lblfname=Label(root,text='first name')
#lblfname.configure(fg='green',font=("Arial",10,"italic"))
btn1click=Button(root,text='Area',command=lambda:Area())
btn2click=Button(root,text='Peri',command=lambda:Peri())
#btn3click=Button(root,text='Mult')
btn4click=Button(root,text='Reset',command=lambda:Reset())
btn5click=Button(root,text='Exit',command=root.destroy)

#btn6click=Button(root,text='Exit')
lbllen.grid(row='0',column='0',pady='5')
txtlen.grid(row='0',column='1',pady='5')
lblbread.grid(row='1',column='0',pady='5')
txtbread.grid(row='1',column='1',pady='5')
lblresult.grid(row='2',column='0',pady='5')
txtresult.grid(row='2',column='1',pady='5')
btn1click.grid(row='3',column='0',pady='5')
btn2click.grid(row='3',column='1',pady='5')
#btn3click.grid(row='3',column='2',pady='5')
btn4click.grid(row='4',column='0',pady='5')
btn5click.grid(row='4',column='1',pady='5')
#btn6click.grid(row='4',column='2',pady='5')

    
root.mainloop()