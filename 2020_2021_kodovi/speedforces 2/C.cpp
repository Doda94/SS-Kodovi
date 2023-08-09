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

char c;
int d;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int sol = 8;
cin >> c >> d;
if ((c=='a' || c=='h') && (d==1 || d==8))
	sol=3;
else if (c=='a' || c=='h' || d==1 || d==8)
	sol=5;

cout << sol;


return 0;
}

