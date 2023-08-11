
conn= connect("todo.db")
c=conn.cursor()


create_table_query= """
                CREATE TABLE "TASKS" (
                ID INTEGER UNIQUE PRIMARY KEY AUTOINCREMENT NOT NULL,
                name TEXT NOT NULL,
                desc TEXT,
                date TEXT default CURRENT_TIMESTAMP
);

"""


select_query = """
                SELECT * FROM TASKS;
"""

insert_query = '''
                INSERT INTO TASKS ("name") VALUES ("Napisi codex")
'''
# c.execute(insert_query)
# conn.commit()

try:
    c.execute(create_table_query)
    conn.commit()
except OperationalError:
    print("Tablica vec postoji")
c.execute(select_query)
pprint(c.fetchall())


conn.close()
