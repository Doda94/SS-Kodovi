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

bool msf(long long a, long long b){
	return a>b;
}

ll n,a[105],d;
double zbr,m;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n >> m;
for (int i = 0; i<n; i++){
 cin >> a[i];
 zbr += a[i];
}
sort(a,a+n,msf);



for (int i = 0; i<m; i++){
	if (a[i] >= (1/(4*m))*zbr){
//		cout << a[i] << endl;	
		d++;
}
}
if (d == m)
	cout << "Yes";
else 
	cout << "No";

//cout << d;
return 0;
}

