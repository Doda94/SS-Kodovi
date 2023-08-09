#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>

typedef long long ll;
using namespace std;

ll n,pd,a[200005];


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

cin >> n;

for (int i = 0; i<n; i++)
	cin >> a[i];
	
sort (a,a+n);

for (int i = 0; i<n; i++)
	if (a[i] == a[i+1]){
		pd++;
		break;
		}



if (pd==0)
	cout << "YES";
else
	cout << "NO";


return 0;
}

