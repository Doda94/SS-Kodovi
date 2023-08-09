#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long n,a[105],b[105];

int main () {

cin >> n;

for (int i = 1; i<=n ; i++){
	cin >> b[i];
	a[i] = b[i] * i;
	for (int k = 1; k<i; k++){
		a[i] -= a[k]; 
	}
}

for (int i = 1; i<=n ;i++){
	cout << a[i] << " ";
}

return 0;
}

