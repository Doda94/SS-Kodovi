#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long n,m[1000005],a[1000005],zr;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long f = pow (10,9) + 7;

long long k = 0;
a[0] = 1;
long long naj = 0;
while (a[k] != 0){
	k++;
	cin >> a[k];
	if (a[k] > naj)
		naj = a[k];
	zr += a[k];
//	zr = zr % f;
}

long long q = (naj*(naj+1))/2 ;

cout << (q-zr) % f;

// a%f - b%f + f)%f; 

return 0;
}

