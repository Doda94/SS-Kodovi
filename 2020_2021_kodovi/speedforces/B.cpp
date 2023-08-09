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

ll n,x;
string p = "++X",m="--X",p1="X++",m1="X--";

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;
for (int i = 0;i<n;i++){
	string s;
	cin >> s;
	if (s==p || s==p1)
		x++;
	else
		x--;
}
cout << x;



return 0;
}

