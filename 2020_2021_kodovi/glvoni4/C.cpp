#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>

#define pb push_back
#define fr(n) for (int i = 0; i<n;i++)

typedef long long ll;
using namespace std;

ll pot (ll q, ll w){
	ll qw = 1;
	for (ll i = 0; i<w; i++)
		qw*= q;
	return qw;
}

ll l,r,x,y,br;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> l >> r >> x >> y;

for (int i = l; i<=r;i++){
	ll sx=0,sy=0;
	if (i%x==0)
		sx=1;
	if (i%y==0)
		sy=1;
	if (sx== 1 && sy == 1)
		br++;
}

cout << br;



return 0;
}


