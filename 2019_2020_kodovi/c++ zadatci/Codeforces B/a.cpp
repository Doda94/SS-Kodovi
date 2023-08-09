#include <iostream>
#include <string>
using namespace std;

long long n,y;
string a[55] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z",
"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"},
b[10005],c; 

int main () {

cin >> n >> c;

y= c.length() ;

for (int i=0;i<=y;i++){
	b[i] = c[i];
	for (int k = 1; k<=26; k++){
		if (b[i] == a[k]){
			b[i] = a[k+n];
			break;
		}
	}
}

for (int i=0; i<=y; i++){
	cout << b[i];
}


return 0;
}

