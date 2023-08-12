#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <iomanip>
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
double brp,brn,bro;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;

fr(n){
	ll a;
	cin >> a;
	if (a>0)	brp++;
	else if (a<0)	brn++;
	else	bro++;
}

double a=brp/n,b=brn/n,c=bro/n;
cout << fixed << setprecision(6) << a << endl << b << endl << c;




return 0;
}


