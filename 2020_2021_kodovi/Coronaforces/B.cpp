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

ll n,s[100005],t[100005],maks,time,q;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;
cin >> s[0] >> t[0];
time = s[0]+t[0];

for (int i = 1; i<n; i++){
	cin >> s[i] >> t[i];
	q = s[i] - time;
	if (q<0) q = abs(q);
	else q = 0;
	if (q>maks)
		maks = q;
	time =  s[i] + t[i]+q;
}

cout << maks;



return 0;
}

