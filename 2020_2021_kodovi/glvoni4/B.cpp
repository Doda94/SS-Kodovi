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

ll n;
vector <string> rj;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;
fr(n){
	ll a,b,da=0;
	cin >> a >> b;
    for (int j = 2;j<=b;j++)
    	if (a%j==0 && b%j==0)
    		da = 1;
	if (da==1)	rj.pb("DA");
	else rj.pb("NE");
}

fr(rj.size())
	cout << rj[i] << "\n";

return 0;
}


