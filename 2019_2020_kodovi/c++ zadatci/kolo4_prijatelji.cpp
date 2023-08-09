#include <iostream>

using namespace std;

int main () {
int a,b,c;
cin >> a >> b >> c;
if (a>b){
	if (a>c){
		cout << "lijevi prijatelj" ;
	}
}
if (b>a){
	if (b>c){
		cout << "prijatelj u sredini" ;
	}
}
if (c>a){
	if (c>b) {
		cout << "desni prijatelj" ;
	}
}
return 0;
}

