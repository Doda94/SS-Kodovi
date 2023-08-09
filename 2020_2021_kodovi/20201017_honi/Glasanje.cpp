#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>

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

ll n,m,a[105],b[105],k[11];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n >> m;

fr(m){
    cin >> a[i] >> b[i];
    k[a[i]]+=b[i];
}
ll rj = 0,maks=0;

for (int i = 1;i<=n;i++)
    if (k[i] > maks){
        rj = i;
        maks=k[i];
    }

cout << rj;



return 0;
}