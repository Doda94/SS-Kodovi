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

string s;
ll maks;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
ll br=1;
cin >> s;
ll c=s.length();
fr(c){
	if (s[i] == s[i-1])
		br++;
	else{
		maks=max(maks,br);
		br=1;
	}		
}

maks=max(maks,br);
cout << maks;

return 0;
}


