from tkinter import *
root = Tk( )
root.title("window")
root.geometry("400x400+50+50")
img=PhotoImage("photo.jpg")
k=Label(root,image=img)
k.pack( )
root.mainloop( )