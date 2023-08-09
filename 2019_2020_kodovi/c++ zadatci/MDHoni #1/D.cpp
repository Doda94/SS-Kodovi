#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

long long n,k,m,a[100005],b[100005],zr1,zr2,najk = 10000000007,najb,mask[100005];

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> k >> m;

for (int i = 1; i<=n; i++){
	cin >> a[i];
}
for (int i = 1; i<=n; i++){
	cin >> b[i];
}

for (int maska = 1; maska<pow(2,n);maska++){
	int x= maska;
	for (int k = 1;k<=n;k++){
		mask[maska]= x%2;
		x /= 2;
	}
for (int i = 1;i<=n;i++){
	if (mask[i]= 1){
		zr1 += a[i];
	}
	if (mask[i] = 0){
		zr2 += b[i];
	}

	if (najk > zr1)
		if (zr1 != 0){
			najk = zr1;
			zr1 = 0;
		}
	if (najb > zr2 )
		if (zr2 != 0){
			najb = zr2;
			zr2 = 0;
			}
}
for (int i = 1;i<=n;i++){
	if (mask[i]= 0){
		zr1 += a[i];
	}
	if (mask[i] = 1){
		zr2 += b[i];
	}

	if (najk > zr1)
		if (zr1 != 0){
			najk = zr1;
			zr1 = 0;
		}
	if (najb > zr2 )
		if (zr2 != 0){
			najb = zr2;
			zr2 = 0;
			}
}
}

cout << najk << "\n" << najb << "\n";
if (najb < m && najk < m)
	cout << "DA";
else 
	cout << "NE";



return 0;
}

