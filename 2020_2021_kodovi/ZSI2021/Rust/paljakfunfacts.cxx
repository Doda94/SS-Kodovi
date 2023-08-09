#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#define pb push_back
#define fr(j,n,s) for (int i = j; i<n;i+=s)
#define repeat(n) for (int i = 0; i<n;i++)
typedef long long ll;
using namespace std;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

/*
dangling vs wild pointer terminologija: 

dangling pointer = pointer koji je pokazivao na validnu vrijednost koja je u medjuvrenu destructana, ali sam pointer nije destructan

Npr: 

int *a = malloc(...);
free(a);
// a je sada dangling pointer

wild pointer = pointer koji nikad nije ni pokazivao na dozvoljenu memoriju

Npr:

int f() {
  char *c; // c je wild pointer
  return 5;
}


*/




return 0;
}
