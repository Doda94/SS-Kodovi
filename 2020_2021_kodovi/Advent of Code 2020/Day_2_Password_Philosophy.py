br=0
while True:
    a=input()
    if a=="":
        break
    l=""
    r=""
    pos=0
    for i in range (len(a)):
        if (a[i]=="-"):
            pos=i
            break
        l+=a[i]
    
    for i in range (pos+1,len(a)):
        if (a[i]==" "):
            pos=i+1
            break
        r+=a[i]
    
    l=int(l)
    r=int(r)
    f=a[pos]
    s= ""
    for i in range (pos+2,len(a)):
        s+=a[i]

    s=s[1:]
    #c=s.count(f)
    #if (c>=l and c<=r):
    #    br+=1
    if (s[l-1]==f and s[r-1]!=f):
        br+=1
    elif (s[l-1]!=f and s[r-1]==f):
        br+=1

print (br)
