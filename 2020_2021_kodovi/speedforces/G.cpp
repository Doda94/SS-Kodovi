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

string s;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n,br=0;
cin >> n;
cin >> s;
for (int i = 0;i<n;i++)
	if (s[i] == '1')
		br++;
		
string rj = "";
if (br>0)
	rj+="1";
for (int i = 0; i<n-br;i++)
	rj+="0";

cout << rj;



return 0;
}

