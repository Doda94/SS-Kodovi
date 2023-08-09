#include <iostream>

using namespace std;

int main () {
int x,n,p,a,b,y;
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

cout << a+y;







return 0;
}

