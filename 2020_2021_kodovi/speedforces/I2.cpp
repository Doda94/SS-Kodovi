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

bool msf(ll q, ll w){
	return q>w;
}

ll a[2020],a1[2020],sol[2020],br[2020];
vector <ll> p; 

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n;
cin >> n;
for (int i = 0;i<n; i++){
	cin >> a[i];
	a1[i] = a[i];
}
sort (a1,a1+n,msf);
ll broj = 0;
for (int i = 0;i<=n; i++)
	if (a1[i] != a1[i-1] && a1[i-1] != 0)
		p.push_back(a1[i-1]);
	ll brojac = 1;
	ll rje = 1;
for (int i = 0;i<n;i++){
	if (a[i] == a[i+1])
		brojac++;
	else{
		br[rje] = br[rje-1]+brojac;
		brojac=1;
		
	}
}		


		
for (int i = 0;i<n; i++){
	for (int k = 0;k<p.size();k++)
		if (a[i] == p[k]){
			sol[i] = br[k]+1;
			break;
		}	
}		

for (int i = 0;i<n; i++)
	cout << sol[i] << " ";

//for (int i = 0;i<p.size();i++)
//	cout << p[i] << " ";

return 0;
}

