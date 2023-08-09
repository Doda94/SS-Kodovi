#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long n,k,a[300],r[300][300],zr;


int main () {
freopen( "gymnastics.in", "r", stdin );
freopen( "gymnastics.out", "w", stdout );
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);

cin >> k >> n;

for (int i = 1;i<=k*n;i++)
	cin >> a[i];
	
for (int i = 1;i<k*n;i+=n){
	for (int o =i;o<i+n;o++){
		for (int w = o+1;w<=i+n;w++){
			r[a[o]][a[w]]++;
//			cout << r[a[o]][a[w]] << "\n";
			if (r[a[o]][a[w]] == k)
				zr++;
		}
	}
}

cout << zr;

return 0;
}

