def main():
    n,m=map(int,input().split())
    l=[]
    for i in range (n):
        a=input()
        l.append(a)
    for i in range (m):
        a,b=input().split()
        l.remove(a)
        c=l.index(b)
        c+=1
        l.insert(c,a)
    print (*l,sep="\n")

main()