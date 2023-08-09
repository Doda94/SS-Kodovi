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

bool msf(ll q, ll w){
	return q>w;
}

ll n,a[2020],b[2020],br = 1,a1[2020],sol[2020],sol1[2020];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n ;
for (int i = 0;i<n;i++){
	cin >> a[i];
	a1[i] = a[i];
//	cout << a[i];
}
sort(a,a+n,msf);
//cout << a[0];

for (int i = 0;i<n;i++){
	if (a[i]!=a[i+1]){
		b[br]=a[i];
		br++;
	}
}
//for (int i = 1;i<br;i++)
//	cout << b[i];

for (int i = 0;i<n;i++){
	ll rj = 0,k=1;
	while (rj==0){
		if (a1[i] == b[k]){
			sol[i] = k;
			sol1[k]++;
			rj=1;
			}
		else
			k++;
	}
}
for (int i = 0;i<n;i++){
	cout << sol[i]+sol1[sol[i]-1];
}
	
return 0;
}

