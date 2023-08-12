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

ll n;
   map<string,ll> mapa;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
cin >> n;
while(n--){
    string s;
    ll a;
    cin >> s;
    cin >> a;

    mapa[s]=a;
}
string s;
while (cin>>s){
    if (mapa.count(s)>0)
        cout<<s<<"="<<mapa[s]<<endl;
    else
        cout << "Not found\n";
}





return 0;
}
