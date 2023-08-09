#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

long long n,k,m,a[100005],b[100005],zr;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> k >> m;
for (int i = 0; i<n;i++)
	cin >> a[i];
for (int i = 0; i<n;i++)
	cin >> b[i];

sort (a,a+n);
sort (b,b+n);

//cout << b[0];

long long c = n-1;
 
for (int i = 0;i<n;i++){
	if (a[i]+b[c] == m)
		zr++;
	c--;
}

if (zr == n)
	cout << "DA";
else 
	cout << "NE";

return 0;
}

