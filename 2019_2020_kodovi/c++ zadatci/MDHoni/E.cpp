#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long n,k,b[5010],y[5010],mask[5010],zr,najzr,najbr,br,done,print,z[5010] ;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> k;

for (int i = 1;i<=n;i++){
	cin >> b[i];
}

for (int i = 1;i<=pow (2,n);i++){
	int x = i;
	zr = 0;
	br = 0;
	
	for (int maska = 1;maska <=n;maska++){
		mask[maska] = x%2;
		x /= 2;
	}
	
	for (int q = 1;q<=n;q++){
		if (mask[q] == 1){
		zr+= b[q];
		br++;
		y[q]=q;
		}
	}
	

	if (zr%k == 0){
		if (najzr < zr){
		najzr = zr;
		najbr = br;
		for (int q = 1;q<=n;q++)
			z[q] = y[q];
	}
	}
	else{
		for (int q = 1;q<=n;q++)
		y[q] = 0;	
	}
	
	
}

cout << najbr << " "<< najzr<< "\n";
for (int q = 1;q<=n;q++)
		if (z[q] != 0)
			cout << z[q]<< " ";


return 0;
}

