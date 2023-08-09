#include <iostream>

using namespace std;

int main() {
	int k,n ;
	cin >> k >> n ;
	int p = 1;
	int b = k;
	for (int i=1;i<n;i++) {
		
		cout << p << "\n"  ;
		b -= p ;
		p++;
		
		
	}
 
 	cout << b ;





	return 0;
}

