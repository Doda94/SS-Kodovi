#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

long long n,m,k[110],zr,br,dod;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> m;

for (int i = 0; i<m; i++)
	cin >> k[i];

long long q = 0;
for (int i = 0; i<m; i++){
	zr += k[i];
	if (zr + k[i+1] > n){
		br++;
		zr = 0;
	}
}

if (zr>0)
	dod++;

cout << br+dod;

return 0;
}

