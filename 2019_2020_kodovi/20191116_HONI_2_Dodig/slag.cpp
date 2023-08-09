#include <iostream>
#include <algorithm>
using namespace std;

int n,x[100000],a[100000],b[100000],c[100000]; 

int main() {

cin >> n;

for (int i = 0 ; i<n ; i++){
	cin >> x[i] >> a[i];
	if ( x[i] == 5 ){
		b[1] = a[i];
		a[i] = 0;
	}
	if ( x[i] == 6 ){
		b[1] = a[i];
		a[i] = 0;
	}
	if ( x[i] == 7 ){
		b[n] = a[i];
		a[i] = 0;
	}
	if ( x[i] == 8 ){
		b[n] = a[i];
		a[i] = 0;
	}
}
int k = 2;

for (int i = 2; i<n ; i++){
	sort (a,a + i);
}

cout << b[1] << " ";

for (int i = 2; i<n ; i++){
	cout << a[i] << " ";
}

cout << b[n];

return 0;
}

