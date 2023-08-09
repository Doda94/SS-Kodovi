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

ll a[10005];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n,m;

cin >> n >> m;

for (int i = 0; i<m; i++){
	cin >> a[i];
	n -= a[i];
	}

if (n<0)
	cout << "-1";
else
	cout << n;

return 0;
}

