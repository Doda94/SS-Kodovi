from sqlite3 import *

class DB:
    def __init__(self, dbname):
        self.B = dbname
        return
    def select(self, upit):
        conn = connect(self.B)
        c = conn.cursor()
        res = c.execute(upit)
        data = []
        for redak in res:
            data.append(redak)
        conn.close()
        return data
    def insert(self, upit):
        conn = connect(self.B)
        c = conn.cursor()
        c.execute(upit)
        conn.commit()
        conn.close()
        return
    def updel(self, upit):
        conn = connect(self.B)
        c = conn.cursor()
        c.execute(upit)
        conn.commit()
        conn.close()
        return


def createTables(dbname):
    createUcenici = '''CREATE TABLE Ucenici(
                            IDUcenika INTEGER PRIMARY KEY AUTOINCREMENT,
                            Ime TEXT NOT NULL,
                            Prezime TEXT NOT NULL,
                            Datumrodenja TEXT)'''
    createNastavnici = '''CREATE TABLE Nastavnici(
                            IDNastavnika INTEGER PRIMARY KEY AUTOINCREMENT,
                            Ime TEXT NOT NULL,
                            Prezime TEXT NOT NULL
                            )'''
    createSkolskegodine = '''CREATE TABLE Skolskegodine(
                                IDGodine INTEGER PRIMARY KEY AUTOINCREMENT,
                                oznakaGod TEXT NOT NULL)'''
    createRazredi = '''CREATE TABLE Razredi(
                        IDRazreda INTEGER PRIMARY KEY AUTOINCREMENT,
                        oznakaRaz TEXT NOT NULL,
                        IDNastavnika INTEGER REFERENCES Nastavnici(IDNastavnika),
                        IDGodine INTEGER REFERENCES Skolskegodine(IDGodine))'''
    createRazrediUcenici = '''CREATE TABLE RazrediUcenici(
                                IDRazreda INTEGER REFERENCES Razredi(IDRazreda),
                                IDUcenika INTEGER REFERENCES Ucenici(IDUcenika))'''
    data = []
    data.extend([createUcenici, createNastavnici, createSkolskegodine, createRazredi, createRazrediUcenici])
    conn = connect(dbname)
    c = conn.cursor()
    for d in data:
        c.execute(d)
    conn.commit()
    conn.close()

def fillUcenici(dbname):
    imeUcenici = ["Ivan", "Marko", "Josip", "Bosko", "Luka", "Karlo", "Bojan", "Dario", "Luka", "Ivan", "Mario", "Marko", "Bojan"]
    prezimeUcenici = ["Kolega", "Jozalo", "Vinjerac", "Balaban", "Kalemegdan", "Debeli", "Bogdanovic", "Saric", "Lukavac", "Ivanec", "Mariotta", "Markalo", "Bogdan"]
    Datumrodenja = ["1980-12-12", "1986-12-31", "2007-12-11", "2008-12-12", "2001-04-20", "2002-04-21", "2003-04-22", "1994-08-12", "1995-08-21", "1996-02-18", "1998-02-19", "1999-01-05", "2000-01-06"] 
    conn = connect(dbname)
    c = conn.cursor()
    for i in range(0, 13):
        upit = '''INSERT INTO Ucenici (Ime, Prezime, Datumrodenja)
                        VALUES("{}", "{}", "{}")'''.format(imeUcenici[i], prezimeUcenici[i], Datumrodenja[i])
        c.execute(upit)
    conn.commit()
    conn.close()

def fillNastavnici(dbname):
    imeUcenici = ["Ivan", "Marko", "Josip", "Bosko", "Luka"]
    imeUcenici.reverse()
    prezimeNastavnici = ["Ivanovic", "Balabovic", "Jakos", "Marevic", "Rudez"]
    conn = connect(dbname)
    c = conn.cursor()
    for i in range(0, 5):
        upit = '''INSERT INTO Nastavnici(Ime, Prezime)
                        VALUES("{}", "{}")'''.format(imeUcenici[i], prezimeNastavnici[i])
        c.execute(upit)
    conn.commit()
    conn.close()
def fillSkGodina(dbname):
    conn = connect(dbname)
    c = conn.cursor()
    for i in range(2020, 2010, -1):
        upit = '''INSERT INTO Skolskegodine(OznakaGod) VALUES("{}")'''.format(i)
        c.execute(upit)
    conn.commit()
    conn.close()

def fillRazred(dbname):
    conn = connect(dbname)
    c = conn.cursor()
    upit = '''INSERT INTO Razredi (OznakaRaz, IDGodine, IDNastavnika) VALUES("{}", {}, {})'''.format("3.a", 1, 2)
    c.execute(upit)
    upit = '''INSERT INTO Razredi (OznakaRaz, IDGodine, IDNastavnika) VALUES("{}", {}, {})'''.format("3.a", 1, 3)
    c.execute(upit)
    upit = '''INSERT INTO Razredi (Oznakaraz, IDGodine, IDNastavnika) VALUES("{}", {}, {})'''.format("3.a", 1, 4)
    c.execute(upit)
    upit = '''INSERT INTO Razredi (OznakaRaz, IDGodine, IDNastavnika) VALUES("{}", {}, {})'''.format("3.a", 2, 2)
    c.execute(upit)
    upit = '''INSERT INTO Razredi (OznakaRaz, IDGodine, IDNastavnika) VALUES("{}", {}, {})'''.format("3.a", 2, 5)
    c.execute(upit)
    upit = '''INSERT INTO Razredi (OznakaRaz, IDGodine, IDNastavnika) VALUES("{}", {}, {})'''.format("3.a", 3, 2)
    c.execute(upit)
    conn.commit()
    conn.close()

def fillRazrediUcenici(dbname):
    upit = '''INSERT INTO RazrediUcenici(IDRazreda, IDUcenika) VALUES({}, {})'''
    conn = connect(dbname)
    c = conn.cursor()
    for i in range(1, 5):
        for j in range(0, 3):
            realUpit = upit.format(j + 1, i * (j + 1))
            c.execute(realUpit)
    for i in range(1, 7):
        for j in range(0, 2):
            realUpit = upit.format(j + 4, i * (j + 1))
            c.execute(realUpit)
    conn.commit()
    conn.close()

def main():
    createTables('schools.db')
    fillUcenici('schools.db')
    fillNastavnici('schools.db')
    fillRazred('schools.db')
    fillSkGodina('schools.db')
    fillRazrediUcenici('schools.db')
    upit = '''SELECT * FROM razredi NATURAL JOIN skolskegodine''' 
    db = DB('schools.db')
    data = db.select(upit)
    for row in data:
        print(row)

main()
