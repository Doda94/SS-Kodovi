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

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n,sol=0;
cin >> n;
for (ll i = 1; i<=n;i++){
	ll potencija = 1;
	for (int j = 1;j<=i;j++)
		potencija*=2;
	sol+=potencija;

}


cout << sol;
return 0;
}

