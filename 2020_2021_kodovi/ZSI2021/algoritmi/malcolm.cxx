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

ll f[25],rj;
string a[300300];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n,k; cin >> n >> k;
repeat (n)
    cin >> a[i];

repeat (k){
    rj+=f[a[i].size()];
    f[a[i].size()]++;
}

fr(k,n,1){
    rj+=f[a[i].size()];
    f[a[i].size()]++;
    f[a[i-k].size()]--;
}

cout << rj;


return 0;
}