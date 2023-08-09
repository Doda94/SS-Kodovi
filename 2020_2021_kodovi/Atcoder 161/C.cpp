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

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n,k,x,d=0;

cin >> n >> k;

x = n%k;
ll px = x;
while (d == 0){
	x -= k;
	x = abs(x);
	if (x<px)
		px = x;
	else 
		d = 1;
}

cout << px;
return 0;
}

