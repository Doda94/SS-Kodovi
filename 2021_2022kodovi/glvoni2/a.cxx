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

ll f[35];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

repeat (25){
    ll a; cin >> a;
    f[a]++;
}
ll maks=-1,maksi=-1;
for (int i = 1;i<=31;i++)
    if (f[i]>maks)
        maks=f[i];
    
cout << maks;



return 0;
}