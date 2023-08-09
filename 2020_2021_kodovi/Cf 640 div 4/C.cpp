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

ll t,n[1000],k[1000];
vector <ll> sol;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> t;

for (int i = 0; i<t; i++)
	cin >> n[i] >> k[i];

for (int i = 0; i<t; i++){
	ll pocbr = n[i]-1;
	ll m = k[i]/pocbr;
	ll ost = k[i]%pocbr;
	ll l = 0;
		l+= n[i]*m;
	if (ost != 0)
		l+= ost;
	else l-=1;
	cout << l << "\n";
}

return 0;
}

