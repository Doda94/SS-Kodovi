#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>

typedef long long ll;
using namespace std;

int pot (ll q, ll w){
	ll qw = q;
	q = 1;
	for (int i = 0; i<w; i++)
		q*= qw;
	return q;
}

ll n;
string s[200200];
map <string,int> mp;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

for (int i = 0; i<n; i++){
	cin >> s[i];
	++mp[s[i]];
}


sort (mp.begin(),mp.end());




return 0;
}

