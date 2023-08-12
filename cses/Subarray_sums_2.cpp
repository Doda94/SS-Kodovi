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

ll n,x,a,br,ksuma[200200];
map <ll, ll>ksum;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n >> x;
for(ll i = 1; i<=n; i++){
    cin >> a;
    ksuma[i]= ksuma[i-1] + a;
    if (ksuma[i] == x)
        br++;
    ll broj = x-ksuma[i];
    broj = -broj;
    ksum[ksuma[i]]++;
    br+=ksum[broj];
}

if (x==ksuma[0])
    br-=n;
cout << br;


return 0;
}
