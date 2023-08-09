#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
typedef long long ll;

ll n,m,a[500200],rj,zbr;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> m;

for (int i = 0; i<n; i++){
	cin >> a[i];
	zbr += a[i];
}

for (int i = 0; i<n; i++){
	ll prj = 0;
	for (int k = i; k<i+m; k++){
		prj += a[k];
//		cout << a[k] << " ";
		}
//		cout << endl;
	if (prj > rj)
		rj = prj;
}

cout << zbr-rj;

return 0;
}


