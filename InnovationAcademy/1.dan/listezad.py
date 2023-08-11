lista = []
a=int(input("Unesi broj elemenata: "))
for i in range (a):
    lista.append(int(input("unesi broj: \n")))
    c= len(lista)
    for i in range (c):
        b=lista.pop ()
        if b%2==0:
            print(f"{b} je paran")
        else:
            print(b, " je neparan.")


    



