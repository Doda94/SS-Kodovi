from tkinter import *

t= Tk()

t.title("ime")
t.config(width=600, height=300, bg="blue")

f=Frame(t,width=600,height=300)
f.grid(rows=3, columns=3)

##font=("Calibri",20,"normal")

a=Label(t, text="nesto")
a.grid(row=2, column=2)

width=t.cget("width")
##print(width)

##a.place(relx=1/2,rely=1/2)


def function():
    print ("Foogar")


btn= Button(t, text = "Button", command=function)
btn.grid(row=2, column=2)








t.mainloop()
