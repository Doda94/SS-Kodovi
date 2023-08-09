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

ll n,m,rj;
string d[100005],p[100005];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n >> m;
fr (n){
	cin >> d[i];
	//cout << d[i] << endl;
}
fr (m) {
	cin >> p[i];
	ll c = p[i].length();
	if (int(p[i][c-1]) < 65 || int(p[i][c-1]) > 122)
		p[i].pop_back();
	//cout << p[i] << endl;
	}
fr (m){
	for (int j = 0;j<n;j++){
		if (d[j] == p[i])
			rj++;
	}
}

cout << rj;



return 0;
}


