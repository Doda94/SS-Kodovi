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

int najveci(ll q, ll w, ll e[]){
	ll qw = 0;
	for (int i = 0; i<w; i++)
		if (e[i] > qw)
			qw = e[i];
	return qw;
}
int najmanji(ll q, ll w, ll e[]){
	ll qw = 99999999999;
	for (int i = 0; i<w; i++)
		if (e[i] , qw)
			qw = e[i];
	return qw;
}

ll n,a[200200],zr,za,minm=9999999, in,zr1,za1;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;
for (int i = 0; i<n; i++)
	cin >> a[i];

for (int i = 0; i<n; i++){
	int k = i;
	zr = najveci(0,i,a)+najmanji(0,i,a)*najmanji(0,i,a)+ (i+1)*(i+1);
	za = najveci(i+1,n,a)+najmanji(i+1,n,a)*najmanji(i+1,n,a)+ (n-i-1)*(n-i-1);	
//	cout << zr << " " << zr1 << "\n";
	if (za+zr < minm){
		minm = za+zr;
		in = i;
	}
}

cout << in;
return 0;
}

