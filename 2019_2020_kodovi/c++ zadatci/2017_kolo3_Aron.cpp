#include <iostream>

using namespace std;

int main () {
	int n ;
	int b = 0;
	char a[30];
	cin >> n ;
	for (int i = 0; i<n ;i++) {
		cin >> a [i];
	}
	for (int i=0; i<n ; i++){
		if (a [i] != a[i+1]) {
			b++;		
		}
	}	
	cout << b+1 ;
return 0;
}
