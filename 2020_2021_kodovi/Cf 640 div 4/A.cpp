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

ll n,t[10004],brz[10004];
vector <ll> sol[10004];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;

for (int i = 0; i<n; i++){
	cin >> t[i];
	ll a = t[i];
	while (a>0){
		brz[i]++;
		if (a%10 != 0)
			sol[i].push_back(a%10 * pot(10,brz[i]-1));
		a/=10;
	}
}

for (int i = 0; i<n; i++){
	cout << sol[i].size() << "\n";
	for (int k = 0; k<sol[i].size(); k++)
		cout << sol[i][k] << " ";
	cout << "\n";
}


return 0;
}

