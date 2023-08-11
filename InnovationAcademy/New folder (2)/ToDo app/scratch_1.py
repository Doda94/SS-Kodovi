from tkinter import *
from db import Task
from tkinter.messagebox import *

class TodoApp(Frame):
    def __init__(self, t):
        self.t=t
        super().__init__(self.t)
        self.t.title("ToDo App")
        self.t.iconbitmap("icon.ico")
        self.grid (padx=20,pady=20)
        self.start_interface()
        self.tasks = Task.all()
        self.descs = ()
        self.rerender()
        return
    def start_interface(self):
        font= ("Calibri",22,"normal",)
        self.text_holder = StringVar()
        self.text_input = Entry(self,textvariable=self.text_holder,font=font, bg="Black",fg="White")
        self.text_input.grid (row=1, column=1, columnspan=2)

        self.text_holder1 = StringVar()
        self.text_input1 = Entry(self, textvariable=self.text_holder1, font=font, bg="Black",fg="White")
        self.text_input1.grid(row=2, column=1, columnspan=2)

        self.button = Button(self, text="Dodaj",font=font, command=self.clickButton)
        self.button.grid(row= 3, column=1, pady=10)

        self.delete=Button(self, text = "Izbrisi" , font=font, command= self.delbutton)
        self.delete.grid(row=3, column=2, pady = 10)

        self.text_input.bind ("<Return>", self.clickButton)


        self.listaIspis =  Listbox(self, font=font)
        self.listaIspis.grid(row=4,column=1,columnspan=4)

        self.listaIspis.bind("<Control_L>", self.delbutton)


    def clickButton(self, e=None):
        a = self.text_holder.get()
        b = self.text_holder1.get ()

        if a != "":


            print(self.tasks)
            task = Task(a, b)
            task.save()
            self.tasks= Task.all()
            self.text_holder1.set ("")
            self.text_holder.set ("")

        self.rerender()
        return

    def delbutton(self,e=None):
        selected = list (self.listaIspis.curselection ())
        if len(selected) == 1:
            output = askyesnocancel ("Delete", "Are you sure you want to delete?")
            if output:
                self.tasks[selected[0]].delete()
                self.tasks = Task.all()
                self.rerender()



    def rerender(self):
        self.listaIspis.delete(0, END)
        for task in self.tasks:
            self.listaIspis.insert(END, task )
        return




TodoApp=TodoApp(Tk())
mainloop()