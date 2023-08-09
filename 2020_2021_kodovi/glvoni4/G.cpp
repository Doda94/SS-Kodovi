#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <sstream>

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

ll n,br=0;
cin >> n;
for (int i = pot(10,n-1);i<pot(10,n);i++){
	string s = to_string(i);
	ll c = s.length();
	for (int j = 0;j<c-1;j++)
		if (s[j] == '3' && s[j+1] == '7'){
			br++;
//			cout << s << endl;
			break;
			}
}
cout << (pot(10,n) -pot(10,n-1)- br)%37373747;




return 0;
}


