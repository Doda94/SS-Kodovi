#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#define pb push_back
#define repeat(n) for (int i = 0; i<n;i++)
typedef long long ll;
using namespace std;

void solve(){
    ll n;
    vector <pair <ll,ll> > e;
    cin >> n;
    repeat (n){
        ll a,b;
        cin >> a >> b;
        e.pb(make_pair(a,0));
        e.pb(make_pair(b,1)); // 0 - dolazak ; 1 - odlazak
    }
    sort(e.begin(),e.end());
    ll cur=0,best=0;
    for (int i =0;i<e.size();i++){
        if (e[i].second==0)
            cur++;
        else 
            cur--;
        if (cur>best)
            best=cur;
    }

    cout << best << "\n";
}


int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll t; cin >> t;
for (int q =0;q<t;q++)
    solve();

return 0;
}