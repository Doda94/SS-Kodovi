from sqlite3 import *

connection = connect ("school.db")

cursor = connection.cursor()

createClassesTableQuery = '''
CREATE TABLE "Classes" (
  ID INTEGER UNIQUE NOT NULL PRIMARY KEY AUTOINCREMENT,
  NAME TEXT NOT NULL,
  CLASS_TEACHER TEXT NOT NULL
);
'''

createStudentTableQuery = """
CREATE TABLE "STUDENTS" (
    ID INTEGER UNIQUE NOT NULL PRIMARY KEY AUTOINCREMENT,
    NAME TEXT NOT NULL,
    SURNAME TEXT NOT NULL,
    GENDER TEXT ,
    YEAR INTEGER NOT NULL,
    CLASS_ID INTEGER NOT NULL,
    FOREIGN KEY ("Class_ID")REFERENCES "Classes"("ID")

);
"""
##cursor.execute(createClassesTableQuery)
##cursor.execute(createStudentTableQuery)

STUDENTS = [
{"NAME" : "Pero",
"SURNAME": "Peric",
"GENDER": "M",
"YEAR" : 2000,
"CLASS_ID": 1
},
{
"NAME": "Ivan",
"SURNAME": "Peric",
"GENDER": "M",
"YEAR" : 2006,

"CLASS_ID": 2
},
{

"NAME": "Marko",
"SURNAME": "Maric",
"GENDER": "M",
"YEAR" : 2008 ,
"CLASS_ID":3
},
]
Classes = [
{ "NAME":"4.B",
  "CLASS_TEACHER":"Ivana Maric"
},
{ "NAME":"2.A",
  "CLASS_TEACHER":"Ivan Canic"
},
{ "NAME":"1.C",
  "CLASS_TEACHER":"Ivano Katic"
}
]

for klass in Classes:
    query= """
    INSERT INTO Classes
    ("NAME","CLASS_TEACHER")
    VALUES ("{}","{}")""".format(
        klass["NAME"],
        klass["CLASS_TEACHER"]
    )                                            
    cursor.execute(query)

for stud in STUDENTS:
    query= """
    INSERT INTO STUDENTS
    ("NAME","SURNAME","GENDER","YEAR","CLASS_ID")
    VALUES ("{}","{}","{}","{}","{}")""".format(
        stud["NAME"],
        stud["SURNAME"],
        stud["GENDER"],
        stud["YEAR"],
        stud["CLASS_ID"]
    )                                            
    cursor.execute(query)
                                
       
    
    






connection.commit()
connection.close()
