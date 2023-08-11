from sqlite3 import *
from pprint import pprint   # daje pprint da se ispise u dva reda
#
# conn= connect("todo.db")
# c=conn.cursor()
#
#
# create_table_query= """
#                 CREATE TABLE "TASKS" (
#                 ID INTEGER UNIQUE PRIMARY KEY AUTOINCREMENT NOT NULL,
#                 name TEXT NOT NULL,
#                 desc TEXT,
#                 date TEXT default CURRENT_TIMESTAMP
# );
#
# """
#
#
# select_query = """
#                 SELECT * FROM TASKS;
# """
#
# insert_query = '''
#                 INSERT INTO TASKS ("name") VALUES ("Napisi codex")
# '''
# # c.execute(insert_query)
# # conn.commit()
#
# try:
#     c.execute(create_table_query)
#     conn.commit()
# except OperationalError:
#     print("Tablica vec postoji")
# c.execute(select_query)
# pprint(c.fetchall())
#
#
# conn.close()



class DB:
    def __init__(self):
        self.connection = connect("todo.db")
        self.cursor = self.connection.cursor()
    def query (self, query):
        self.cursor.execute(query)
        return self.cursor.fetchall()
    def update (self,query):
        self.cursor.execute(query)
        self.connection.commit()
        return self.cursor.fetchall()


db= DB()
# db.update('INSERT INTO TASKS ("name") VALUES ("code")')
# pprint (db.query("SELECT * FROM TASKS"))

class Task:
    def __init__(self, name, desc, id=None):
        self.name = name
        self.desc = desc
        self.id = id
    def __str__(self):
        return f"{self.name} ( {self.desc} )"
    def __repr__(self):
        return self.__str__()
    @staticmethod
    def all():
        tasks = db.query("SELECT * FROM TASKS")
        output = []
        for task in tasks:
            output.append(Task(task[1],task[2], task[0]))
        return output

#t = Task("Odnesi smece" , "Smece je kod vrata")  # -> Task
# print(t.__str__())
#
# print(Task.all()) # -> [Task,Task,Task...]


