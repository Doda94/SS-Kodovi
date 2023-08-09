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
typedef long long ll;
using namespace std;
const ll INFll = 0x7f;
const int INFint = 0x3f3f3f3f;

vector <ll> v;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n; cin >> n;
for (int i = 0;i<n;i++){
    ll a; cin >> a;
    v.pb(a);
}
ll br=0;
sort (v.begin(),v.end());
for (int i = 1;i<v.size();i++){
    br+=v[0]+v[i];
}
cout << br;

return 0;
}