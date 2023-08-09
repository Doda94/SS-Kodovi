#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
typedef long long ll;

ll n,f[5],rj;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);



cin >> n;
for (int i = 0; i<n; i++){
	ll a;
	cin >> a;
	f[a]++;
}

for (int i = 1; i<5; i++){
//	cout << f[i] << endl;
	if (f[i] > n/4){
		rj += f[i]-n/4;
	}
}


cout << rj;

return 0;
}

