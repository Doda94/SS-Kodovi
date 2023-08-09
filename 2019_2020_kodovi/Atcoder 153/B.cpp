#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

long long h,n,a,zr;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> h >> n;

for (int i = 0; i<n; i++){
	cin >> a;
	zr += a;
}

if (zr >= h)
	cout << "Yes";
else 
	cout << "No";


return 0;
}

