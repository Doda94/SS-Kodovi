#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
typedef long long ll;

ll a[200200],n,br;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;
for (int i = 0; i<n; i++){
	ll b;
	cin >> b;
	a[i] = b;
}

sort (a,a+n);

for (int i = 0; i<n;i++){
	if (a[i+1] == 0)
		break;
	if (a[i] != a[i+1])
		br++;
}

cout << br+1;

return 0;
}

