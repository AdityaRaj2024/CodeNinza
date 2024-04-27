from tkinter import *
from tkinter import messagebox
from tkinter import simpledialog
root=Tk( )
root.geometry("4x5")
messagebox.showinfo("Show Name")
nm=simpledialog.askstring("Your Name","Enter Your Name")
messagebox.showinfo("My Name","I Am "+nm)
root.mainloop( )