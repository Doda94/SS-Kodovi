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

ll n,s,a[100005],brp,brn;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n >> s;
for (int i = 0; i<n;i++){
	cin >> a[i];
	if (a[i] == 0)
		brp++;
	else
		brn++;
}
ll rj = 0;
if(brp != 0 )
	rj = n/brp;
if (rj%2==0 && n%2==0)
	cout << "YES";
else if (rj%2!=0){
	if (rj*(n-1) + brn >= s)
		cout << "YES";
	else
		cout << "NO";
}
else


return 0;
}

