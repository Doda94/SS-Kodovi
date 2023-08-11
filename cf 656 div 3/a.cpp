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

ll t;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> t;
fr(t){
	ll x,y,z,a=0,b=0,c=0;
	cin >> x>>y>> z;
	if (x==y)
		a=x;
	if (y==z)
		c=y;
	if (x==z)
		b=x;
	if(a!=0 && b!=0 && c!=0)
		cout << "YES\n" << a << " "<< b << " " << c << "\n"; 
	ll br=0;
	if (a!=0)
		br++;
	if (b!=0)
		br++;
	if (c!=0)
		br++;
	
	if (br==2){
		if (a==0)
			a=1;
		if (b==0)
			b=1;
		if (c==0)
			c=1;
		cout << "YES\n" << a << " "<< b << " " << c << "\n";
	}
	else
		cout << "NO\n";
}





return 0;
}


