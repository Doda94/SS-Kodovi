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

ll k,n,w,p;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> k >> n >> w;
for (int i = 1; i<=w;i++){
	p+=i*k;
}
if (p<n)
	cout << 0;
else
	cout << p-n;



return 0;
}

