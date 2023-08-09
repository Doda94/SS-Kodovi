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

vector <ll> v1,v2,v3;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n; cin >> n;
fr(0,n,1){
    ll a; cin >> a;
    if (a==1){
        v1.pb(1);
        v2.pb(1);
        v3.pb(0);
    }
    else if(a==2){
        v1.pb(1);
        v2.pb(1);
        v3.pb(1);
    }
    else{ll x = a/2;
    ll y = x+1;
    v1.pb(2);
    v2.pb(x);
    v3.pb(y);}
}
repeat (n){
    cout << v1[i] << " " << v3[i] << " " << v2[i] << endl;
}




return 0;
}