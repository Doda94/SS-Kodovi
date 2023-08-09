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
#define repeat(n) for (int i = 0; i<n;i++)
#define fr(n,j,k) for (int i = n; i<j;i+=k)
typedef long long ll;
using namespace std;

ll kutije[1005],KUTIJE[1005];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n,m,q; cin >> n >> m >> q;

for (int i=1; i<=n; i++){
    cin >> kutije[i];
    KUTIJE[i]=i;    
}
for (int i=0; i<q; i++){
    ll a,b; cin >> a >> b;
    if ((kutije[b]==a) || (KUTIJE[b]==a))
        cout << "DA\n";
    else
        cout << "NE\n";
}



return 0;
}