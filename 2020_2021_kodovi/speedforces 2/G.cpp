#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>

#define pb push_back
#define fr(n) for (int i = 0; i<n;i++)
#define pr(a) cout << a

typedef long long ll;
using namespace std;

ll pot (ll q, ll w){
	ll qw = 1;
	for (ll i = 0; i<w; i++)
		qw*= q;
	return qw;
}

bool msf(ll a, ll b){
	return a>b;
}

ll t[6],zbr;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

fr (5){
	cin>>t[i];
	zbr+=t[i];
}
sort(t,t+5,msf);

ll br = 0,maks=0,broj=t[0];
fr(5){
	if (broj == t[i] && br<3)
		br++;
	else{
		if (broj*br > maks)
			maks=broj*br;
		br = 0;
		broj=t[i];
	}
}


pr(zbr-maks);



return 0;
}


