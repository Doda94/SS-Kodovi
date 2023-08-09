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

ll f[405];
vector <ll> rj;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n,m; cin >> n >> m;
repeat(m){
    ll a; cin >> a; 
    f[a]++;
}
ll br=0;
repeat (404){
    if (f[i]>0)
        br++;
    // cout << f[i] << " ";
}

repeat (br){
ll pos = distance(f,max_element(f,f+405));
rj.pb(pos);
f[pos] = 0;
}
// cout << br;
repeat(rj.size())
    cout << rj[i] << endl;

return 0;
}