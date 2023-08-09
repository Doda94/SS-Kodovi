t = int(input())
for i in range (t):
    a,b,c,d=map(int,input().split())
    u1 = ((a-1)*(a-2))
    u2 = (b*(b-1))
    u3 = ((c-1)*(c-2))
    u4 = (d*(d-1))
    if u1>0:
        ui1 = u2/u1
    else:
        ui1 = u2

    if u3>0:
        ui2 = u4/u3
    else:
        ui2 = u4

    print (ui1)


    if (ui2%ui1==0):
        print ("DA")
    else:
        print ("NE")