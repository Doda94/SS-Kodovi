class Human:
    def __init__(self,Name,Surname,Age):
        self.name=Name
        self.surname=Surname
        self.age=Age
    def __repr__(self):
        return f"My name is {self.name} {self.surname} and I am {self.age} years old."
    def age(self):
        return f"This Humans age is {self.age}"


class Student(Human):
    def __init__(self,Name,Surname,Age,School,Class):
        super().__init__(Name,Surname,Age)
        self.school=School
        self.Class=Class
    def __repr__(self):
        return f"My name is {self.name} {self.surname}, I am {self.age} years old, I go to {self.school}, {self.Class} grade."
    
    def grades_left(self):
        a = 4 - int(self.Class)
        return f"You have {a} grades left."
        

    
