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

ll n,p,a,f[105];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n >> p;
for (int i = 0;i<p;i++){
	ll p1;
	cin >> p1;
	f[p1]=1;
}
cin >> a;
for (int i = 0;i<a;i++){
	ll a1;
	cin >> a1;
	f[a1]=1;
}
ll sol = 0;
for (int i = a;i<=n;i++){
	if (f[i] == 0)
		sol++;
}
if (sol>0)
	cout << "Oh, my keyboard!";
else 
	cout << "I become the guy.";

return 0;
}

