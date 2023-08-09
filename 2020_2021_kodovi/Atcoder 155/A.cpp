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

ll a,b,c,f[10],rj;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> a >> b >> c;

f[a]++;
f[b]++;
f[c]++;

for (int i = 0; i<10; i++)
	if (f[i] == 2)
		rj = 1;

if (rj == 1)
	cout << "Yes";
else
	cout << "No";


return 0;
}

