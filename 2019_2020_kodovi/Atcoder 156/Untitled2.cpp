#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
typedef long long ll;

ll n,x[110],minm = 9999999999,zbr;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;

for (int i = 0; i<n; i++)
	cin >> x[i];
	
for (int i = 0; i<n; i++){
	zbr += (x[i]*x[i]) - (2*x[i]*n) - (n*n);
}

cout << zbr;



return 0;
}

