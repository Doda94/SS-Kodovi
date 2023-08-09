#include <iostream>
#include <string>
using namespace std;



int main () {
string n ;
char c;
int a = 0;
int b = 0;
cin >> n ;

int k;

k= n.length();


for (int i = 0; i<k;i++){
	c = n.at(i);
	if (a == 0){
		if (c=='H'){
			a = 1;
		}	
	}
	if (a == 1){
		if (c=='O'){
			a = 2;
		}	
	}
	if (a == 2){
		if (c=='N'){
			a = 3;
		}	
	}
	if (a == 3){
		if (c=='I'){
			a = 4;
		}	
	}
	if (a == 4){
		b++;
		a = 0;
	}
	
}





cout << b;
return 0;
}

