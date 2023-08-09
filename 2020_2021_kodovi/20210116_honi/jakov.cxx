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

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n; cin >> n;
ll h,m,br=0; cin >> h >> m;
repeat (n){
    ll a,b; cin >> a >> b;
    if (a>h){
        br++;
        continue;
    }
    else if (a==h)
        if (b>m)
            br++;


}

cout << br;


return 0;
}