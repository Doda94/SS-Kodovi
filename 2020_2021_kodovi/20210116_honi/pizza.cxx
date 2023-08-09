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

set <ll> s;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n,br=0;
cin >> n;
repeat (n){
    ll a; cin >> a;
    s.insert(a);
}
ll m;
cin >> m;
repeat (m){
    ll t;
    cin >> t;
    bool done = 0;
    for (int j = 0;j<t;j++){
        ll a; cin >> a;
        if (!done){
            if (s.find(a) != s.end())
                done=1;
        }
    }
    if (done)
        br++;

}

cout << m-br;


return 0;
}