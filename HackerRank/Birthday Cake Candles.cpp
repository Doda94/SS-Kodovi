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

ll n,ar,maks,f[10000007];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;
fr (n){
    cin >> ar;
    f[ar]++;
    if (ar>maks)
        maks = ar;
}

cout << f[maks];


return 0;
}

