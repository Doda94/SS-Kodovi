from tkinter import *
from db import Task

class TodoApp(Frame):
    def __init__(self, t):
        self.t=t
        super().__init__(self.t)
        self.t.title("ToDo App")
        self.grid (padx=20,pady=20)
        self.start_interface()
        self.tasks= Task.all()
        return
    def start_interface(self):
        font= ("Calibri",22,"normal")
        self.text_holder = StringVar()
        self.text_input = Entry(self,textvariable=self.text_holder,font=font)
        self.text_input.grid (row=1, column=1, columnspan=2)

        self.button = Button(self, text="Dodaj",font=font, command=self.clickButton )
        self.button.grid(row= 2, column=1, columnspan=2,pady=10)

        self.text_input.bind ("<Return>", self.clickButton)

        self.listaIspis =  Listbox(self, font=font)
        self.listaIspis.grid(row=3,column=1,columnspan=2)


    def clickButton(self, e=None):
        a = self.text_holder.get()
        if a != "":
            self.tasks.append(a)
            self.text_holder.set ("")
        self.rerender()
        return

    def rerender(self):
        self.listaIspis.delete(0, END)
        for task in self.tasks:
            self.listaIspis.insert(END, task )
        return




TodoApp = TodoApp (Tk())
mainloop()