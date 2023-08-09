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

ll n,a[100005],q,l[100005],r[100005];
vector <ll> sol;
int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;
for (int i = 0; i<n;i++)
	cin >> a[i];
cin >> q;
for (int i = 0;i<q;i++){
	cin >> l[i] >> r[i];
	ll suma = 0,maks=0;
	for (int k = l[i];k<=r[i];k++){
		suma+=a[k];
		if (a[k] > maks)
			maks = a[k];
	}
	sol.push_back(suma-maks);
}

for (int i =0;i<sol.size();i++)
	cout << sol[i] << "\n";


return 0;
}

