import itertools
def main ():
    n=int(input())
    s=input()
    minm=9999999999999999999
    l= [''.join(it) for it in itertools.permutations(s)]
    for i in range (len(l)):
        s0 = l[i]
        s1,s2=s0[:n],s0[n:]
        if (s1 == s2):
            print (s0)





main()