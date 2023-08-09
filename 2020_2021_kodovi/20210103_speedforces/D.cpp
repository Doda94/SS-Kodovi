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

ll t[100];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n; cin >> n;
repeat (n){
    ll a; cin >> a;
    t[a]=1;
}
ll br =0,brt=0;
repeat (91){
    // br++;
    if (t[i]==1)
        br=0;
    brt++;
    br++;
    if (br>15){
        cout << brt-1;
        return 0;
    }
}

cout << 90;
return 0;
}