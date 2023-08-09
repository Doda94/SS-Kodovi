#include <iostream>

using namespace std;

int n,x[100000],a[100000],b[100000],c[100000]; 

int main() {

cin >> n;

for (int i = 1 ; i<=n ; i++){
	cin >> x[i] >> a[i];
	if ( x[i] == 5 ){
		b[1] = a[i];
		a[i] = 0;
		x[0] = 5;
	}
	if ( x[i] == 6 ){
		b[1] = a[i];
		a[i] = 0;
		x[0] = 6;
	}
	if ( x[i] == 7 ){
		b[n] = a[i];
		a[i] = 0;
	}
	if ( x[i] == 8 ){
		b[n] = a[i];
		a[i] = 0;
	}

//	if (b[1] != 0){
//		if (x[0] == 5){
//			if (x[i] == 3 || x[i] = 4){
//				
//			}
//		}
//	}

}

int k = 2;

for (int i = 1; i<=n ; i++){
		if (x[0] == 5){
			if (x[i] == 3 || x[i] = 4){
				b[k]= a[i];
				k++;
			}
		}
		else if (x[0] == 6){
			if (x[i] == 1 || x[i] = 2){
				b[k]= a[i];
				k++;
			}
		}
		else []
}








return 0;
}

