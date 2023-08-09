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

ll a,b;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin>>a>>b;
ll br = min(a,b);
ll sol = 1;
for (int i = 1;i<=br;i++)
	sol*=i;

cout << sol;



return 0;
}

