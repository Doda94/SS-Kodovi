#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>

#define pb push_back
#define fr(n) for (int i = 0; i<n;i++)

typedef long long ll;
using namespace std;

ll pot (ll q, ll w){
	ll qw = 1;
	for (ll i = 0; i<w; i++)
		qw*= q;
	return qw;
}

ll f[200200],n,rj;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;
fr(n-1){
	ll a;
	cin >> a;
	f[a]++;
}
for (int i = 1; i<=n;i++)
	if (f[i] == 0)
		rj=i;
		
cout << rj;		




return 0;
}



