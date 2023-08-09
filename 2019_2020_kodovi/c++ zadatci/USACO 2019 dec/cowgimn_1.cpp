#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long n,k,a[300][300],r[300][300],zr;


int main () {
freopen( "gymnastics.in", "r", stdin );
freopen( "gymnastics.out", "w", stdout );
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);

cin >> k >> n;

for (int i = 1;i<=k;i++)
	for (int j = 1;j<=n;j++)
		cin >> a[i][j];
	
for (int i = 1;i<=k;i++){
	for (int j = 1;j<n;j++)
		for (int q = j+1;q<=n;q++){
			r[a[i][j]][a[i][q]]++;
			if (r[a[i][j]][a[i][q]] == k)
				zr++;
		}
	
}

cout << zr;

return 0;
}

