class Auto:
    def __init__(self,boja,godina): 
        self.boja = boja
        self.godina = godina #svojstva klase




class Pravokutnik:
    def __init__(self,a,b):
        self.a=a
        self.b=b

    def __repr__(self):
        return "Pravokutnik sa stranicom a= {} i b={}".format(self.a,self.b)
    
    def povrsina(self):
        return self.a*self.b
    def opseg(self):
        return 2*self.a+2*self.b
    def dijagonala(self):
        return (self.a**2+self.b**2)**0.5 # **2=kvadrat , **0.5=korijen iz 2
class Kvadrat(Pravokutnik):
    def __init__(self,a):
        super().__init__(a,a) #"uzmi klasu koja je iznad tebe i na njoj pozovi __init__(konstruktor)"
    def __repr__(self):
        return f"Kvadrat sa stranicom a = {self.a} "                           
        
