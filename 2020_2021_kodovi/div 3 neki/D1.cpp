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

ll n,a[100005],q,l[100005],r[100005],maks[100005],kum[100005];
vector<ll> sol;
int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;
for (int i= 1;i<=n;i++){
	cin >> a[i];
	kum[i] = kum[i-1]+a[i];
}
cin >> q;
for (int i = 0;i<q;i++){
	cin >> l[i] >> r[i];
	l[i]++;
	r[i]++;
	sol.push_back((kum[r[i]] - kum[l[i]-1] )- max(a[l[i]],a[r[i]]));
}

for (int i = 0; i<sol.size(); i++)
	cout << sol[i] << "\n";

return 0;
}

