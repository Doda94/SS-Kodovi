#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

bool msf (long long q, long long w){
	return q>w;
}

long long n,h[100005],dif1,dif2,r1,r2,h1[100005],rj1[100005],rj2[100005];


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;

for (int i = 0; i<n ; i++){
	cin >> h[i];
	h1[i] = h[i];
}

sort (h,h+n);
//sort (h1,h1+n,msf);

dif1 = h[1] - h[0];
dif2 = h[n-1] - h[n-2];
rj1[0] = h[0];
long long m = n-1;
rj2[0] = h[m];
long long b = 0;

long long g = n;
r1++;
r2++;
for (int k = 0;k<n;k++){
	if (r1 == n/2)
		break;
	if (h[0]+dif1 == h[k]){
		b++;
		dif1 += dif1;
		rj1[b] =  h[k];
		h[k] = b*k*3.14;
		r1++;
	}
	

}
b = 0;
for (int k = n-2;k>=0;k--){
	if (r2 == n/2)
		break;
	if (h[n-1]-dif2 == h[k]){
		b++;
		dif2 += dif2;
		rj2[b] =  h[k];
		h[k] = b*k*3.14;
		r2++;
	}

}

//cout << r1 << r2;

sort (rj2,rj2+r2);

if (r1==r2){
	cout << r1 << "\n";
	for (int i = 0;i<=r1;i++){
		if (rj1[i] != 0)
			cout << rj1[i] << " ";
	}
	cout << "\n" << r2 << "\n";
	for (int i = 0;i<=r2;i++){
		if (rj2[i] != 0)
			cout << rj2[i] << " ";
	}
}
else 
	cout << -1;



return 0;
}

