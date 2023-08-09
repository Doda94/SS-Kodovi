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

ll t,n[1000],k[1000];
vector <ll> sol[1000];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> t;

for (int i = 0; i<t; i++)
	cin >> n[i] >> k[i];

for (int i = 0; i<t; i++){
	if ((n[i]-k[i]+1) > 0 && (n[i]-k[i]+1) % 2 == 1){
		for (int q = 0; q<k[i]-1; q++)
			sol[i].push_back(1);
		sol[i].push_back(n[i]-k[i]+1);
	}
	else if ((n[i]-2*k[i]+2) > 0 && (n[i]-2*k[i]+2) % 2 == 0){
		for (int q = 0; q<k[i]-1;q++)
			sol[i].push_back(2);
		sol[i].push_back(n[i]-2*k[i]+2);
	}	
}

for (int i = 0; i<t; i++){
	if (sol[i].size()>0){
		cout << "YES\n";
		for (int q = 0; q<sol[i].size(); q++)
			cout << sol[i][q] << " ";
		cout << "\n";
	}
	else
		cout << "NO\n";
}



return 0;
}

