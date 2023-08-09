#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
typedef long long ll;

ll n,x[110],minm = 9999999999;

int pot (ll q,ll w){
	ll qw = q;
	q = 1;
	for (int i = 0; i<w; i++)
		q *= qw;
	return q;
}

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;

for (int i = 1; i<=n; i++)
	cin >> x[i];
	
for (int i = 1; i<= 100; i++){
	ll zbr = 0;
	for (int k = 1; k<=n; k++){
		zbr += (x[k]*x[k]) - (2*x[k]*i) + (i*i);
	}
	if (zbr < minm)
		minm = zbr;
}

cout << minm;

return 0;
}

