from sqlite3 import *

conn= connect("todo.db")
c=conn.cursor()


create_table_query= """
                 CREATE TABLE "Tasks" (
                 ID INTEGER UNIQUE PRIMARY KEY AUTOINCREMENT NOT NULL,
                 name TEXT NOT NULL,
                 desc TEXT,
                 date TEXT default CURRENT_TIMESTAMP
);

 """


select_query = """
                 SELECT * FROM Tasks;
"""

insert_query = '''
                 INSERT INTO Tasks ("name") VALUES ("Napisi codex")
 '''
c.execute(insert_query)
conn.commit()

try:
    c.execute(create_table_query)
    conn.commit()
except OperationalError:
    print("Tablica vec postoji")
c.execute(select_query)
print(c.fetchall())


conn.close()