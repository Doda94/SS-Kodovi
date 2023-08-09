#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cstring>
#define pb push_back
#define fr(j,n,s) for (int i = j; i<n;i+=s)
#define repeat(n) for (int i = 0; i<n;i++)
typedef long long ll;
using namespace std;

ll dist[10005];
ll inf =4557430888798830399;
void dijkstra(){
    vector < pair <ll, ll> > edges[10005];
    set < pair <ll, ll> > s;
    memset(dist, inf, sizeof dist);
    ll v,k; cin >> v >> k;
    fr(0,k,1){
        ll a,b,c;
        cin >> a >> b >> c;
        edges[a].pb(pair <ll,ll> (b,c));
    }

    ll A,B; cin >> A >> B;
    dist[A]=0;
    s.insert(pair<ll,ll>(0,A));

    while (!s.empty()){
        pair <ll,ll> cur = *s.begin();
        s.erase(cur);
        ll x = cur.second;
        fr(0,edges[x].size(),1){
            ll b= edges[x][i].first;
            ll c= edges[x][i].second;
            if (dist[x] + c < dist[b]){
                if (dist[b]!= inf)
                    s.erase(pair <ll,ll> (dist[b],b));
                dist[b]=dist[x]+c;
                s.insert(pair<ll,ll> (dist[b],b));
            }
        }
    }

    if (dist[B]==inf)
        cout << "NO\n";
    else 
        cout << dist[B] << "\n";
}




int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n; cin >> n;

for (int j = 0;j<n;j++){
    dijkstra();
}



return 0;
}