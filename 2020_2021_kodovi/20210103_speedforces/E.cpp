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

vector <ll> v,rj;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n; cin >> n;
repeat (n){
    ll a; cin >> a;
    v.pb(a);
}
ll br =1;
fr(1,v.size(),1){
    if (v[i]==1){
        rj.pb(br);
        br=0;
    }
    br++;
}

cout << rj.size()+1 << endl;
repeat (rj.size())
    cout << rj[i] << " ";
cout << br;

return 0;
}