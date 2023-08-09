#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cstring>
#include <stack>
#include <deque>
#define pb push_back
#define repeat(n) for (int i = 0; i<n;i++)
#define fr(n,j,k) for (int i = n; i<j;i+=k)
typedef long long ll;
using namespace std;

ll rj[100005];
vector <ll> infro[100005];
vector <ll> arr[100005],red[100005];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

memset(rj,-1,sizeof(rj));

ll n,q; cin >> n >> q;
repeat (q){
    ll a,b,c; cin >> a >> b >> c;
    if (a>n)
        continue;
    arr[a].pb(c);
    infro[a].pb(b);
    red[a].pb(i);
}

deque <pair<ll,pair<ll,ll> > > cur;

fr(1,n+1,1){
    for (int j = 0;j<arr[i].size();j++){
        cur.pb(make_pair(red[i][j],make_pair(arr[i][j], infro[i][j])));
    }
    sort(cur.begin(),cur.end());
    if (!cur.empty()){
        while (cur.back().second.second<i){
            cur.pop_back();
            if (cur.empty())
                break;
        }
        if (!cur.empty())
            rj[i]=cur.back().second.first;
    }
}

fr(1,n+1,1){
    cout << rj[i] << " ";
}

return 0;
}