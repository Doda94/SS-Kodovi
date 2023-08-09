#include <iostream>
 
using namespace std;
 
int main () {
int x,n,p,y;
int a = 0;
cin >> y >> n ;
x = y;
for (int i = 0; i<n ; i++){
	cin >> p;
	x = y; 
	x+= a;
	a = 0;
	if (p<x){
		a += x-p ;
	}
}
int q = a+y;

cout << q;
 
return 0;
}
