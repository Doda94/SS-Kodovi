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
fr(10){
ll m = i+1;
cout << n << " x " << m << " = " << n*m << endl;
}





return 0;
}
