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

ll n,p,a,p1,a1,f[105],sol;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;
cin >> p;
for (int i= 0;i<p;i++){
	cin >> p1;
	f[p1] = 1;
}
cin >> a;
for (int i= 0;i<a;i++){
	cin >> a1;
	f[a1] = 1;
}

for (int i = 1; i<=n;i++)
	if (f[i] == 0)
		sol++;
		
if (sol == 0)
	cout << "I become the guy.";
else
	cout << "Oh, my keyboard!";


return 0;
}

