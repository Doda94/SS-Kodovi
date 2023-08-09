#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>

#define pb push_back
#define fr(n) for (int i = 0; i<n;i++)

typedef long long ll;
using namespace std;

ll pot (ll q, ll w){
    ll qw = 1;
    for (ll i = 0; i<w; i++)
        qw*= q;
    return qw;
}

ll x,y;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> x >> y;
ll br = 0;
for (int i = x; i>=0; i--){
    ll r=y-i;
    if (r%3==0 && (r/3+i)==x){
        // cout << i << endl;
        cout << "ISTINA";
        return 0;
    }
}
cout << "LAZ";


return 0;
}