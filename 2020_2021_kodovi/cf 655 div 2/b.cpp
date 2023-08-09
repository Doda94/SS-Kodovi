#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include<numeric>

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

ll t,minm=9999999999999999,cr;
vector <ll> rja,rjb;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> t;
fr(t){
    ll n,cr=0;
    ll pra=0,prb=0;
    minm = 9999999999999999;
    cin >> n;
    ll a = n-1;
    for (int j = 1; j<n/2+1;j++){
        ll l = lcm(j,a);
        if (l<minm){
            minm=l;
            cr = j;
            pra = j;
            prb = a;
        }
        a--;
    }
    rja.pb(pra);
    rjb.pb(prb);
}

fr(rja.size()){
    cout << rja[i] << " " << rjb[i] << "\n";
}
return 0;
}

