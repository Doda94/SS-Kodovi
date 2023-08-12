#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>

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
cin >> n;
fr(n){
    string s;
    string rj1,rj2;
    cin >> s;
    for (int j =0;j<s.length(); j++)
        if (j%2==0)
            rj1+=s[j];
        else rj2+=s[j];

    cout << rj1 << " " << rj2<< "\n";
}






return 0;
}
