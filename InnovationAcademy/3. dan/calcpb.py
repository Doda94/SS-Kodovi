from tkinter import *


class Calculator(Frame):
    def __init__(self, t):
        self.t = t
        super().__init__(self.t)

        self.t.title('Calculator')
        self.grid(rows=4, columns=4, padx=20, pady=20)

        self.start_interface()
        self.bindKeys()

    def start_interface(self):
        font = ('Calibri', 20, 'normal')

        self.a_val = StringVar('')
        self.a = Entry(self, font=font, textvariable=self.a_val)
        self.a.grid(row=1, column=1, columnspan=2)

        self.b_val = StringVar('')
        self.b = Entry(self, font=font, textvariable=self.b_val)
        self.b.grid(row=1, column=3, columnspan=2)

        self.button_plus = Button(self, text="+", command=self.plus)
        self.button_plus.grid(row=2, column=1)

        self.button_minus = Button(self, text="-", command=self.minus)
        self.button_minus.grid(row=2, column=2)

        self.button_mult = Button(self, text="*", command=self.mult)
        self.button_mult.grid(row=2, column=3)

        self.button_div = Button(self, text="/", command=self.div)
        self.button_div.grid(row=2, column=4)

    def bindKeys(self):
        self.t.bind('<Control_L>', self.plus)
        self.t.bind('<Control_R>', self.minus)
        self.t.bind('<Alt_L>', self.div)
        self.t.bind('<Shift_L>', self.mult)

    def plus(self, event=None):
        a = int(self.a_val.get())
        b = int(self.b_val.get())
        print(a + b)

    def minus(self, event=None):
        a = int(self.a_val.get())
        b = int(self.b_val.get())
        print(a - b)

    def mult(self, event=None):
        a = int(self.a_val.get())
        b = int(self.b_val.get())
        print(a * b)

    def div(self, event=None):
        a = int(self.a_val.get())
        b = int(self.b_val.get())
        print(a / b)


calc = Calculator(Tk())
mainloop()