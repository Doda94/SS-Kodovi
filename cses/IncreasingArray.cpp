#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
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

ll n,br;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;
ll x[200200];
fr(n){
cin >> x[i];
if (i>0)
    if(x[i]<x[i-1]){
        br+=x[i-1]-x[i];
        x[i]=x[i-1];
    }
//cout << br << endl;
}

cout << br;


return 0;
}
