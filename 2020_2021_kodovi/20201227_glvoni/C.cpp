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

ll maks,brmax;
vector < pair<ll ,ll> > v;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n,x; cin >> n >> x;
repeat(n){
    ll a; cin >> a;
    if (a>maks){
        v.pb(make_pair(maks,brmax));
        maks=a;
        brmax=1;
    }
    else if(a==maks)
        brmax++;
}
v.pb(make_pair(maks,brmax));
ll najveci=0,cr=0,pos=0;
repeat(v.size()){
     cr=v[i].first*v[i].second+(n-v[i].second);
     if (cr>najveci){
         najveci=cr;
         pos=i;
     }
}

maks=v[pos].first;
brmax=v[pos].second;

cout << maks << " " <<maks*brmax+(n-brmax)+1-(v.size()-(pos+1));



return 0;
}