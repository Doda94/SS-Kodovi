#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <charconv>

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

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n;
string br;
cin >> n;

while(n>0){
    ll x = n%2;
    br+= to_string(x);
    n/=2;
}
ll maks = 0,bro=0;
for (int i =0; i<=br.size();i++){
    if (br[i] == '1')
        bro++;
    else{
        if (bro>maks)
            maks=bro;
            bro=0;
    }
//    cout << br[i];
}

cout << maks;

return 0;
}
