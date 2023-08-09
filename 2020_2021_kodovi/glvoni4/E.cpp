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

ll n,m,k,vr[100005],p[100005],rj,br;
vector <ll> l;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n >> m >> k;

fr(n)
	cin >> vr[i];
fr(m){
	cin >>p[i];
	l.pb(vr[p[i]-1]);
}
sort(l.begin(),l.end());
//cout << l[0];
for (int i = 0;i<l.size();i++){
//	cout << l[i];
	if (rj + l[i] <= k){
		br++;
		rj+=l[i];
	}
}
if (br>0)
	cout << br;
else
	cout << "Hodi spat!";

return 0;
}


