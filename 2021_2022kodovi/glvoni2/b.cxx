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

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll t; cin >> t;
for (int test = 0; test<t; test++){
    ll n,m,k; cin >> n >> m >> k;
    vector <ll> a;
    for (int i = 0; i<n*m; i++){
            ll x; cin >> x;
            a.pb(x);
        }
    sort (a.begin(),a.end());
    ll brp = 0;
    for (int i = 0; i<n*m;i++){
        while (a[i]>=k){
            a[i]-=k;
            brp--;
        }
        while (a[i] <= 0){
            a[i]+=k;
            brp++;
        }
    }
    if (brp<=0)
        cout << "DA\n";
    else
        cout << "NE\n";

}




return 0;
}