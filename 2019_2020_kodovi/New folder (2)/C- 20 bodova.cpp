#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

long long n,t[1100],z[1100],ost,zr,l[1100];

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;

for (int i = 1; i<=n; i++){
	cin >> t[i] >> z[i];
	zr += t[i];
}

for (int i = 1; i<=n; i++){
	long long q;
	if (zr/z[i] > 0){
		q = z[i];
		zr -= z[i];
	}
	else {
		q = zr;
		zr -= q;
	}
	l[i] = q ;
	if (l[i] == 0)
		ost++;
}


cout << ost << endl;
for (int i = 1; i<=n; i++)
	cout << l[i] << " ";
	
return 0;
}

