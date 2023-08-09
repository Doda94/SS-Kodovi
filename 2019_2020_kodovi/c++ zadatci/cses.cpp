#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int n;
long long p[25],rj,mask[25],zr1,zr2,naj = 1000000007;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;

for (int i=1; i<=n ; i++){
	cin >> p[i];
}

for (int i = 0; i<pow(2,n);i++){
	int x = i;
	for (int maska = 1 ;maska<=n;maska++){
		mask[maska] =  x % 2;
		x /= 2;
	}
	zr1=0;
	zr2= 0;
	for (int k=1; k<=n ; k++){
		if (mask[k] == 1){
			zr1 += p[k];
		}
		if (mask[k] == 0){
			zr2 += p[k];
		}
	}
	if (zr1 > zr2){
				if (zr1-zr2<naj)
					naj = zr1-zr2;
		}
		if (zr2 >= zr1){
				if (zr2-zr1<naj)
					naj = zr2-zr1;
		}
}
		

//		cout << zr1 << "\n" << zr2 << "\n";	
	cout << naj;

return 0;
}

