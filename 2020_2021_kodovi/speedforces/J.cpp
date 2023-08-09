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

ll n,f[200],c;
string s;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n >> s;
for (int i = 0; i<n; i++){
	f[int(s[i])]++;
}
for(int i = 65; i<=90;i++){
	if (f[i] > 0 || f[i+32] > 0)
		c++;
}

if (c==26)
	cout << "YES";
else
	cout << "NO";

return 0;
}

