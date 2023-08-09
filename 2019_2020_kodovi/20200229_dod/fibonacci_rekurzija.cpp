

#include<iostream>
#include<cstdio>
using namespace std;

long long broj_poziva;

long long fib(int n)
{
  ++broj_poziva;
  if(n==0) return 0;
  if(n==1) return 1;
  return fib(n-1)+fib(n-2);
}

int main()
{
  int n;
  scanf("%d", &n);
  long long fibo;
  fibo = fib(n);
  printf("fib(%d)=%lld\nbroj poziva: %lld\n\n", n, fibo, broj_poziva);

  system("pause");
  return 0;
}
