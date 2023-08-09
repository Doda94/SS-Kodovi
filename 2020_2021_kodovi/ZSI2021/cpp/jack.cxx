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

ll a[105];
ll maks=0;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n,m,q,w,e;
cin >> n >> m;
repeat (n){
    cin >> a[i];
}

for (int i = 0;i<n;i++)
    for (int j =0;j<n;j++)
        for (int k = 0;k<n;k++)
            if (a[i]+a[j]+a[k]<=m && a[i]+a[j]+a[k]>maks && i!=j && i!=k && j!=k){
                maks=a[i]+a[j]+a[k];
                q=i;w=j;e=k;
                }

cout << maks;
// cout << endl << q << endl << w << endl << e;
return 0;
}