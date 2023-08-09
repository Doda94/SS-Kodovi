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

ll n,a[102],rj,brp;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;

for (int i = 0; i<n; i++){
	cin >> a[i];
	if (a[i] % 2 == 0){
		brp++;
		if (a[i] % 3 == 0 || a[i] % 5 == 0)
			rj++;
	}
}

if (rj != brp)
	cout << "DENIED";
else 
	cout << "APPROVED";


return 0;
}

