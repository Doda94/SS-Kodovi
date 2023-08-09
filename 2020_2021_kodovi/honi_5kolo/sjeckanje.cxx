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

ll a[200200];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n,q;
cin >> n >> q;
repeat (n)
    cin >> a[i];

repeat(q){
    ll l,r,x; cin >> l >> r >> x;
    for (int j = l-1;j<r;j++){
        a[j]+=x;
    }
    ll zbr = -9999999999;
    for (int j = 1;j<n-1;j++){
        ll min1 = *min_element(a,a+j);
        ll max1 = *max_element(a,a+j);
        ll min2 = *min_element(a+j,a+n);
        ll max2 = *max_element(a+j,a+n);
        if (((max1-min1)+(max2-min2)) > zbr)
            zbr = (max1-min1)+(max2-min2);
    }
    cout << zbr << endl;

}


return 0;
}