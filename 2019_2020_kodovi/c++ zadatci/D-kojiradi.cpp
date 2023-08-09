#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

long long n,k,m,a[100005],b[100005],zrk,zrb;

bool msf (long long a, long long b){
	return a>b;
}

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> k >> m;
for (int i = 0; i<n;i++)
	cin >> a[i];
for (int i = 0; i<n;i++)
	cin >> b[i];

sort (a,a+n);
sort (b,b+n,msf);

int v = 0;

while (zrk <= m && v <= n){
	zrk += a[v];
	v++;
}

//cout << b[0];
//cout << v;

if (v == n)	
	cout << "DA";
else{
	zrb = 0;
	for (int i = v-1;i<n;i++){
		zrb+=b[i];
	}
	if (zrb <= m)
		cout << "DA";
	else 
		cout << "NE";
}

return 0;
}

