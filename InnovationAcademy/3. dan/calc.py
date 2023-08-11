from tkinter import *
from tkinter.messagebox import *
class Calculator(Frame):
    def __init__(self,t):
        self.t = t
        super().__init__(self.t)
        self.t.title("Calculator")
        self.grid(row = 4, columns = 4, padx = 10, pady = 10)

        self.start_interface()
        # self.bind()
        
    def start_interface(self):
        self.a_val = StringVar('')
        self.a = Entry(self, width = 10, textvariable = self.a_val)#TEXTVARIABLE=SVE STO SE UNESE U -> SELF.A_VAL
##      self.a.grid (row = 1, column = 1)
        self.a.grid (row = 1, column = 1, columnspan = 2)

        
##        self.button = Button(self, text = "Print", command = self.click)#command=event koji ce se pozvati nakon stiskanja buttona
##        self.button.grid(row = 1, column = 2)

##    def click(self):
##        print(self.a_val.get()) #.get daje vrijednost koju mi razumijemo

    
        self.b_val = StringVar('')

        self.b= Entry(self, width = 10, textvariable = self.b_val)
        self.b.grid( row = 1, column = 3, columnspan = 2)

        self.button= Button(self, text = "Zbroji", command = lambda : self.calc("+"))
        self.button.grid(row = 2, column = 1)

        self.buutton= Button(self, text = "Oduzmi", command = lambda : self.calc("-"))
        self.buutton.grid(row = 2, column = 2)

        self.button_1= Button(self, text = "Pomnozi", command = lambda : self.calc("*"))
        self.button_1.grid(row = 2, column = 3)

        self.buutton_1= Button(self, text = "Podjeli", command = lambda : self.calc("/"))
        self.buutton_1.grid(row = 2, column = 4)

        self.output_text = StringVar()
        self.output = Label(self, textvariable=self.output_text)
        self.output.grid(row=3, column=1, columnspan=4)

    # def bind(self):
    #     self.t.bind("<Control_R>", lambda : self.calc("+"))
    #     self.t.bind("<Control_L>", lambda : self.calc("-"))
    #     self.t.bind("<Shift_L>", lambda : self.calc("/"))
    #     self.t.bind("<Alt_L>", lambda : self.calc("*"))
    def calc(self, operation):
        try:
            g = int(self.a_val.get())
            h = int(self.b_val.get())
            if operation == "+":
                c=(g + h)
            elif operation == "-":
                c=(g - h)

            elif operation == "/":
                c=(g / h)

            elif operation == "*":
                c=(g * h)

            self.output_text.set(str(c))
        except ValueError:
            # print ("Majmune to nije broj")
            showinfo("error","Majmune to nije broj")
        except ZeroDivisionError:
            # print ("Nemos djelit na nulom nisi Chuck Norris")
            showinfo("error","Nemos djelit na nulom nisi Chuck Norris")

calc= Calculator (Tk()) #definiranje kalkulatora, passali tk kao klasu,uvijek treba pisati
mainloop()
