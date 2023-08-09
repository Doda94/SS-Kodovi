#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>

typedef long long ll;
using namespace std;

int pot (ll q, ll w){
	ll qw = q;
	q = 1;
	for (int i = 0; i<w; i++)
		q*= qw;
	return q;
}

ll n,a[200200],mini[200200],maxi[200200],maxr[200200],minr[200200], minm = 9999999999999999, in, n1,n2;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;
cin >> a[0];
maxi[0] = a[0];
mini[0] = a[0];
for (int i = 1; i<n; i++){
	cin >> a[i];
	if (a[i] > maxi[i-1])
		maxi[i] = a[i];
	else 
		maxi[i] = maxi[i-1];
		
	if (a[i] < mini[i-1])
		mini[i] = a[i];
	else 
		mini[i] = mini[i-1];
}

maxr[n-1] = a[n-1];
minr[n-1] = a[n-1];

for (int i = n-2; i>=0; i--){
	if (a[i] > maxr[i+1])
		maxr[i] = a[i];
	else 
		maxr[i] = maxr[i+1];
		
	if (a[i] < minr[i+1])
		minr[i] = a[i];
	else 
		minr[i] = minr[i+1];
//	cout << a[i];
}

for (ll i = 0; i<n; i++){
	if (i+1 == n)
		continue;
	n1 = maxi[i] + mini[i]*mini[i] + (i+1)*(i+1);
	n2 = maxr[i+1] + minr[i+1]*minr[i+1] + (n-i-1)*(n-1-i);
	if (i == 0)
		minm = n1+n2;
	if (n1+n2 < minm){
		minm = n1+n2;
		in = i;
	}
//	cout << "n1: " << maxi[i] << " + " <<mini[i]*mini[i] << " + " << (i+1)*(i+1) << endl;
//	cout << "n2: " << maxr[i+1] << " + " << minr[i+1]*minr[i+1] << " + " << (n-i-1)*(n-1-i) << endl;
}

//for (int i = 0; i<n; i++){
//	cout << maxi[i] << " " << mini[i]<<endl;
//}	
//cout << endl;
//for (int i = 0; i<n; i++){
//	cout << maxr[i] << " " << minr[i]<<endl;
//}
cout << in+1;

return 0;
}

