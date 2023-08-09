#include<iostream>
#include<cstdio>
using namespace std;

int n;
long long fib_table[200];

long long fib(int n)
    {
     if (n==0) return 0;
     if (n==1) return 1;
     if (fib_table[n]==0)
        fib_table[n]=fib(n-1)+fib(n-2);
     return fib_table[n];
                  }

int main()
{
 scanf("%d", &n);
 printf("%lld\n\n", fib(n));


//system("pause");
return 0;
}
