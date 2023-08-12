#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>

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

ll a[6][6],maks=-999999999999,br;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

for  (int i = 0;i<6;i++)
    for (int j = 0;j<6;j++)
        cin >> a[i][j];

for  (int i = 0;i<6;i++)
    for (int j = 0;j<6;j++)
        if (i<=3 && j<=3){
            ll zbr=0;
            zbr+= a[i][j]+a[i][j+1]+a[i][j+2];
            zbr+= a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            zbr+= a[i+1][j+1];
            if (zbr>maks)   maks=zbr;
//            br++;
        }

cout << maks;






return 0;
}
