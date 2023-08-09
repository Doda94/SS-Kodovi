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

string a,b;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> a >> b;
if (a==b)
	cout << a;
else 
	cout << 1;




return 0;
}

