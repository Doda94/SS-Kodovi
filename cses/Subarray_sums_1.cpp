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

ll n,x,a[200000],l,r,suma,br,done;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n >> x;
fr (n)
    cin >> a[i];
suma = a[0];
if (suma == x)
    br++;
while (done == 0){
    // cout << " l = " << l << " r = " << r << " suma = " << suma << " br = "<< br << endl;
    if (r<n-1){
        r++;
        suma+=a[r];
        if (suma == x){
            br++;
            suma-=a[l];
            l++;
        }
        while (suma > x){
            suma -=a[l];
            l++;
            if (suma == x){
                br++;
                suma-=a[l];
                l++;
            }
        }
    }
    else {
        if (suma == x){
            br++;
            done=1;
            // continue;
        }
        else{
            suma-=a[l];
            l++;
        }
        if (l>r)
            done = 1;
    }
    
}


cout << br;

return 0;
}