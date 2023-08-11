from tkinter import *

class Calculator(Frame):
    def __init__(self,t):
        self.t = t
        
        super().__init__(self.t)
        
        self.t.title("Calculator")

        self.grid(row = 4, columns = 4, padx = 10, pady = 10)

        self.start_interface()
        
    def start_interface(self):
        self.a_val = StringVar()
        
        self.a = Entry(self, width = 10, textvariable = self.a_val)#TEXTVARIABLE=SVE STO SE UNESE U -> SELF.A_VAL
        self.a.grid (row = 1, column = 1)
##        self.button = Button(self, text = "Print", command = self.click)#command=event koji ce se pozvati nakon stiskanja buttona
##        self.button.grid(row = 1, column = 2)

##    def click(self):
##        print(self.a_val.get()) #.get daje vrijednost koju mi razumijemo

    def start_interface1(self):
        self.b_val = StringVar()

        self.b= Entry(self, width = 10, textvariable = self.b_val)
        self.b.grid( row = 1, column = 2)

        self.buton= Button(self, text = "Zbroji", command = self.zbroji)
        self.button.grid(row = 2, column = 1)

    def zbroji(self):
        int (self.a_val)
        int (self.b_val)
        print (self.a_val + self.b_val)





calc= Calculator (Tk())#definiranje kalkulatora, passali tk kao klasu,uvijek treba pisati
mainloop()
