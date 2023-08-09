""" 
8 6
10 1 1 1 1 1 1 5
10 2
1 5 1 5 2 5 6 2 5 6 
"""
def neRadi():
    n,k=map(int, input().split())
    l=list(map(int,input().split()))
    size = n//k + n%k
    for vel in range (1,size+1):
        a=[]
        for i in range (n-vel):
            b=[]
            b.append(l[i])
            for j in range (i+1,i+vel):
                b.append(l[j])
            a.append(b)
        brp=1
        for i in range (1,len(a)):
            if a[0]==a[i]:
                brp+=1
        # print (brp)
        # print (a)
        if (brp==k):
            print (a[0])

def main():
    n,k=map(int, input().split())
    l=list(map(int,input().split()))
    for i in range (0,n-1):
        for j in range (n,-1,-1):
            a=l[i:j]
            a=[-1]
            vel=0
            prvi=a[0]
            for q in range (1,len(a)):
                if (prvi==a[q]):
                    vel=q
                    break
            a1=[]
            b=[]
            if (vel==0):
                continue
            for q in range (0,len(a),vel):
                b.append(a[q])
                for w in range (q,vel):
                    b.append(a[w])
                a1.append(b)
            vrijedi=1
            brp=0
            for j in range (len(a1)):
                if (a1[0]==a1[j]):
                    brp+=1
                else:
                    vrijedi=0
            if (vrijedi and brp==k):
                print (vel)
                print (a1[0])
                
                


main()