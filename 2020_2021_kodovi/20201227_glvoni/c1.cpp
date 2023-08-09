#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#define pb push_back
#define fr(j,n,s) for (int i = j; i<n;i+=s)
#define repeat(n) for (int i = 0; i<n;i++)
typedef long long ll;
using namespace std;

map <ll,ll> mp,v;
vector <ll> veki;
ll naj,xd;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n,x; cin >> n >> x;
repeat (n){
    ll a; cin >> a;
    if (mp[a]==0){
        mp[a]=1;
        v[a] = 1;
        veki.pb(a);
    }
    else
        v[a]++;
}
sort(veki.begin(),veki.end());
ll zbr=1;
for (ll i = 0; i<veki.size();i++){
    ll a = veki[i];
    ll c= zbr+v[a]*a;
    if (c>naj){
        naj=c;
        xd=a;
    }
    zbr+=v[a];
}

cout << xd << " " << naj;

return 0;
}