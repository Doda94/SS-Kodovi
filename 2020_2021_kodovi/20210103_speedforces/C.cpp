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

vector <ll> v1,v2;
ll f[505];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n,m; cin >> n;
repeat (n){
    ll a;
    cin >> a;
    v1.pb(a);
    f[a]++;
}
cin >> m;
repeat(m){
    ll a; cin >> a;
    v2.pb(a);
    f[a]++;
}

repeat (v1.size()){
    ll a;
    a=v1[i];
    for (int j = 0;j<v2.size();j++){
        a+=v2[j];
    if (f[a]==0){
        cout << v1[i] << " " << v2[j];
        return 0;}
    else
        a-=v2[j];    
    }
    
}



return 0;
}