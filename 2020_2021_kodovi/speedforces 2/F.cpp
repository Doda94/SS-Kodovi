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

ll k,r;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> k >> r;
ll p=k,br=1,sol = 0;
if((p-r)%10==0 || p%10==0)
		sol=1;

while (sol==0){
	p+=k;
	br++;
	if((p-r)%10==0 || p%10==0)
		sol=1;
}

cout << br;


return 0;
}

