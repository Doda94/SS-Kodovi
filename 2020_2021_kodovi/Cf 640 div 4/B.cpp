#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>

typedef long long ll;
using namespace std;

int pot (ll q, ll w){
	ll qw = q;
	q = 1;
	for (int i = 0; i<w; i++)
		q*= qw;
	return q;
}

ll t,n[1000],k[1000],tocno[1000];

vector <ll> veki[1000];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> t;

for (int i = 0; i<t; i++)
	cin >> n[i] >> k[i];

for (int i = 0; i<t; i++){
	ll a = n[i];
	ll b = k[i];
	ll c = a/b;
	ll m = a%b;
	ll rj = 0;
	if (m > 0){
		c++;
		ll br=0;
		while (rj+c < a){
			br++;
			rj+= c;
		}		
		ll d= a-rj;
		if (c%2 == d%2)
			tocno[i] = 1;
		if (tocno[i] == 1){
			for (int q = 0; q<br; q++)
				veki[i].push_back(c);
			veki[i].push_back(d);
		}
		if (tocno[i] == 0){
			c--; // c=1
//			cout << c;
			rj=c;
			br=0;
			ll done = 0;
			while (done == 0 && rj+c < a){
				d = a-rj;
				if (c%2 == d%2 && d != a)
					done = 1;
				br++;
				rj+=c;
//				cout << "Luzer";
			}
			if (c%2 == d%2)
			tocno[i] = 1;
		if (tocno[i] == 1){
			for (int q = 0; q<br; q++)
				veki[i].push_back(c);
			veki[i].push_back(d);
		}
		
		}
	}
	else{
		tocno[i] = 1;
		for (int q = 0; q<b; q++)
			veki[i].push_back(c);
	}
}

for (int i = 0; i<t; i++){
	if (tocno[i] == 1 && veki[i].size() == k[i]){
		cout << "YES\n";
		for (int q = 0; q<veki[i].size(); q++)
			cout << veki[i][q] << " ";
		cout << "\n";
	}
	else 
		cout << "NO\n";
	
}


return 0;
}

