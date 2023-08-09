#include <iostream>

using namespace std;

int n,x[100000],a[100000],b[100000],c[100000]; 

int main() {

cin >> n;

int k = 1;

for (int i = 0; i<n ; i++){
	cin >> x[i] >> a[i];
	if (x[i] == 5){
		b[k] = a[i];
		k++;
		a[i] = 0;
	}
	else if (x[i] == 6){
		b[k] = a[i];
		k++;
		a[i] = 0;
	} 
	else if (x[i] == 7){
		b[n] = a[i];
		a[i] = 0;
	}
	else if (x[i] == 8){
		b[n] = a[i];
		a[i] = 0;
	}
}

for (int i = 0; i<n ; i++){
	if (a[i]!=0){
		b[k] = a[i];
		k++;
	}
}
if (n == 3){
cout << b[1] << " ";
for (int i = 2; i<k; i++){
	cout << b[i] << " ";
}
cout << b[k];
}
else {
	cout << -1;
}
return 0;
}

