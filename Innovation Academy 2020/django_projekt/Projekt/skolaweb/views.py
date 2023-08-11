from django.shortcuts import render
from sqlite3 import *

# Create your views here.
def index(request):
    return render(request, 'index.html')
def listaj(request):
    conn=connect('schools.db')
    c=conn.cursor()
    query='''SELECT * FROM UCENICI'''
    lista=c.execute(query)
    listl=[]
    for l in lista:
        d=Ucenik(l[0],l[1],l[2],l[3])
        listl.append(d)
    podaci={"liste":listl}
        # print (d)
    return render(request,'listaj.html', podaci)
def dodaj(request):
    return render(request,'dodaj.html')
def obrisi(request):
    conn=connect('schools.db')
    c=conn.cursor()
    query='''SELECT * FROM UCENICI'''
    lista=c.execute(query)
    listl=[]
    for l in lista:
        d=Ucenik(l[0],l[1],l[2],l[3])
        listl.append(d)
    podaci={"liste":listl}
    return render(request,'obrisi.html',podaci)
def updateaj(request):
    conn=connect('schools.db')
    c=conn.cursor()
    query='''SELECT * FROM UCENICI'''
    lista=c.execute(query)
    listl=[]
    for l in lista:
        d=Ucenik(l[0],l[1],l[2],l[3])
        listl.append(d)
    podaci={"liste":listl}
    return render(request,'updateaj.html',podaci)
def dodajpost(request):
    conn=connect('schools.db')
    c=conn.cursor()
    a=request.POST['Ime']
    b=request.POST['Prezime']
    d=request.POST['datrod']
    queryadd='''INSERT INTO Ucenici(Ime, Prezime, Datumrodenja)
                VALUES ("{}","{}","{}")'''.format(a,b,d)
    # print(queryadd)
    c.execute(queryadd)
    conn.commit()
    query='''SELECT * FROM Ucenici'''
    lista=c.execute(query)
    listl=[]
    for l in lista:
        d=Ucenik(l[0],l[1],l[2],l[3])
        listl.append(d)
    podaci={"liste":listl}
    conn.close()
    return render(request,"listaj.html",podaci)
    
def izbrisipost(request):
    conn=connect('schools.db')
    c=conn.cursor()
    a=request.POST['idn']
    querydel='''DELETE FROM Ucenici
                WHERE IDUcenika = ("{}")'''.format(a)
    c.execute(querydel)
    conn.commit()
    query='''SELECT * FROM Ucenici'''
    lista=c.execute(query)
    listl=[]
    for l in lista:
        d=Ucenik(l[0],l[1],l[2],l[3])
        listl.append(d)
    podaci={"liste":listl}
    conn.close()
    return render(request,"listaj.html",podaci)

def updateajpost(request):
    conn=connect('schools.db')
    c=conn.cursor()
    a=request.POST['idn']
    b=request.POST['Ime']
    d=request.POST['Prezime']
    e=request.POST['datrod']
    queryup='''UPDATE Ucenici
            SET Ime="{}",
                Prezime="{}",
                Datumrodenja="{}"
            WHERE IDUcenika={}'''.format(b,d,e,a)
    c.execute(queryup)
    conn.commit()
    query='''SELECT * FROM Ucenici'''
    lista=c.execute(query)
    listl=[]
    for l in lista:
        d=Ucenik(l[0],l[1],l[2],l[3])
        listl.append(d)
    podaci={"liste":listl}
    conn.close()
    return render(request,"listaj.html",podaci)

class Ucenik:
    def __init__(self, IDN, Ime, Prezime, datRodenja):
        self.idn=IDN
        self.Ime=Ime
        self.Prezime=Prezime
        self.datRodenja=datRodenja
    



