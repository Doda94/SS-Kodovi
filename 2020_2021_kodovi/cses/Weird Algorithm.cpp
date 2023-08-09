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

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n;
cin >> n;

while (n != 1){
	cout << n << " ";
	if (n % 2 == 0)
		n /= 2;
	else 
		n = n*3+1;
}
cout << 1;



return 0;
}

