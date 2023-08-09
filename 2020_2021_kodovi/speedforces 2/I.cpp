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

ll n,sol;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;
for (int i = 0;i<n;i++){
	string s;
	ll b,a;
	cin >> s >> b >> a;
	if (b>=2400 && a>b)
		sol=1;
}

if (sol == 0)
	cout << "NO";
else 
	cout << "YES";

return 0;
}

