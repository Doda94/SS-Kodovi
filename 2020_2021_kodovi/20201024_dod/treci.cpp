#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>

#define pb push_back
#define fr(n) for (int i = 0; i<n;i++)

typedef long long ll;
using namespace std;

ll pot (ll q, ll w){
    ll qw = 1;
    for (ll i = 0; i<w; i++)
        qw*= q;
    return qw;
}

ll z,n,c[1000000],a,l,r;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> z >> n;

fr(n)
    cin >> c[i];

sort (c,c+n);

ll minm = 0, maks=n-1;
ll mid = 0;
bool done = 0;
while (done!=1){
    mid = (maks+minm)/2;
    if (z==c[mid]){
        l=minm;
        r=mid;
        done = 1;
    }
    else if (z>c[mid])
        minm=mid+1;
    else if(z<c[mid])
        maks=mid;
    else if (z>c[mid] && z<c[mid-1])
        done = 1;
    
    
}

cout << r;

return 0;
}