#include <iostream>

using namespace std;

long long a,b,c,d,a1,c1;

int main () {

cin >> a >> b >> c >> d ;

if (a<b){
	a1 = a;
}
else {
	a1 = b;
}
if (c<d){
	c1 = c;
}
else {
	c1 = d;
}

a1 = a1*a1;
c1 = c1*c1;

if (a1>c1){
	cout << "Luka\n" << a1;  
}
else {
	cout << "Marko\n" << c1;
}



return 0;
}

