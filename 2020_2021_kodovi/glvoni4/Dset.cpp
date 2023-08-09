#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>

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

bool contains(set<string> sth,string s){
	return sth.find(s) != sth.end();
}

ll n,m,br;
set<string> myset;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n >> m;

fr(n){
	string s;
	cin >> s;
	myset.insert(s);
}
fr(m){
	string s;
	cin >> s;
	ll c = s.length();
	if (int(s[c-1]) < 65 || int(s[c-1]) > 122)
		s.pop_back();
	bool sol = myset.find(s) != myset.end();
	if (sol == 1)
		br++;
}

cout << br;



return 0;
}


