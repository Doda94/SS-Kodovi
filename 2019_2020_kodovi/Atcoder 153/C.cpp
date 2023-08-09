#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

long long n,k,h[200005],zr;

bool msf (long long a, long long b){
	return a>b;
}

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> k;

for (int i = 0; i<n; i++)
	cin >> h[i];
	
sort (h,h+n,msf);

int q = 0;

for (int i = 0; i<k; i++)
	h[i] = 0;

sort (h,h+n);

for (int i = 0; i<n; i++)
	zr+= h[i];

cout << zr;

return 0;
}

