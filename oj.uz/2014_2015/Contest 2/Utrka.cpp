#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
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

ll n;
map <string, int> mapa;
vector<string> popis;
string rj;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;

fr(n*2-1){
    string s;
    cin >> s;
    mapa[s]+=1;
    popis.pb(s);
}

sort (popis.begin(), popis.end());
popis.erase(unique(popis.begin(),popis.end() ), popis.end() );

fr(popis.size()){
    if (mapa[popis[i]] % 2 != 0){
        rj = popis[i];
        cout << rj;
        return 0;
    }
}

return 0;
}
