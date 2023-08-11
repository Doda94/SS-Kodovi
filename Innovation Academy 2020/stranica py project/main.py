from sqlite3 import *

conn= connect('schools.db')
c=conn.cursor()

upit= ''' CREATE TABLE Ucenici(
        IDUcenika INTEGER PRIMARY KEY AUTOINCREMENT,
        Ime TEXT,
        Prezime TEXT,
        DatRodenja TEXT
        )'''
# c.execute(upit)
upitInsert= '''INSERT INTO Ucenici
                (Ime, Prezime, DatRodenja)
                VALUES ("LUKA", "HLAPIC","2002-10-24")'''
# c.execute(upitInsert)
upitSelect= '''
            Select *
            From Ucenici
            Where Prezime LIKE "P%"'''

upitcreatenastavnici='''CREATE TABLE Nastavnici(
            IDNastavnika INTEGER PRIMARY KEY AUTOINCREMENT,
            Ime TEXT,
            Prezime TEXT)
            '''
# c.execute(upitcreatenastavnici)
upitInsert1= '''INSERT INTO Nastavnici
                (Ime, Prezime)
                VALUES ("Marko", "Peric")'''
upitInsert2= '''INSERT INTO Nastavnici
                (Ime, Prezime)
                VALUES ("Filip", "Pavletic")'''
upitInsert3= '''INSERT INTO Nastavnici
                (Ime, Prezime)
                VALUES ("Joza", "Joza")'''
upitInsert4= '''INSERT INTO Nastavnici
                (Ime, Prezime)
                VALUES ("Joza", "Boza")'''
# c.execute(upitInsert1)
# c.execute(upitInsert2)
# c.execute(upitInsert3)
# c.execute(upitInsert4)

upitSelect= '''
            Select Prezime
            From Nastavnici
            Where Ime="Joza"'''

lista=c.execute(upitSelect)
for l in lista:
    print(l)

upitcreateskgodine='''CREATE TABLE Skolskegodine(
            IDGodine INTEGER PRIMARY KEY AUTOINCREMENT,
            Godine TEXT
            )
            '''
# c.execute(upitcreateskgodine)

listal=[]
for i in range(2000,2021):
    listal.append(i)

deletequeryskgodine= '''delete from Skolskegodine'''
# c.execute(deletequeryskgodine)
for i in range(0,len(listal)):
    upitInsert5 = f'''INSERT INTO Skolskegodine
                    (Godine)
                    VALUES ({listal[i]})'''
    c.execute(upitInsert5)

skgodineispis= '''
            Select Godine
            From Skolskegodine
            Where Godine>2010'''

listask=c.execute(skgodineispis)
for l in listask:
    print(l)


conn.commit()
conn.close()