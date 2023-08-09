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

ll n,a[100005],b[100005];
vector<ll> sol;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;
for (int i = 0; i<n;i++){
	ll q;
	cin >> q >> a[i] >> b[i];
	if (q==1)
		sol.push_back(a[i] + b[i]);
	else if(q==2)
		sol.push_back(a[i] - b[i]);
	else if(q==3)
		sol.push_back(a[i] * b[i]);
	else if(q==4)
		sol.push_back(a[i] / b[i]);
	else if(q==5)
		sol.push_back(a[i] % b[i]);
	}
for (int i = 0;i<sol.size();i++)
	cout << sol[i] << "\n";
	




return 0;
}

