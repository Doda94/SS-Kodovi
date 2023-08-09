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
const ll INFll = 4557430888798830399;
const int INFint = 0x3f3f3f3f;

ll f[100000009],a[200200],rj;

bool msf (ll a ,ll b){
    return a > b;
}

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n; cin >> n;
for (int i = 1;i<=n;i++)
    cin >> a[i];

for (int l = 1;l<=n;l++){
    for (int r = l; r<=n;r++){
        memset (f,0,sizeof f);
        ll br = 0;
        for (int i = l;i<=r;i++){
            f[a[i]]++;
            br++;
        }
        sort (begin(f),end(f),msf);
        if (f[0]>br/2) rj++;
    }
}

cout << rj;

return 0;
}