from sqlite3 qimport *

conn= connect('schools.db')
c=conn.cursor()

queryj= '''UPDATE Ucenici
        SET Ime ="Zekoslav"
        WHERE Ime like "%o"
        '''
queryd='''UPDATE Ucenici
        SET Prezime ="Mozart"
        WHERE Datumrodenja > "01-01-2000"
        '''
queryt='''DELETE FROM Ucenici
        WHERE Prezime != "Mozart"
        '''

def main():
    c.execute(queryj)
    c.execute(queryd)
    c.execute(queryt)



main()
conn.commit()
conn.close()