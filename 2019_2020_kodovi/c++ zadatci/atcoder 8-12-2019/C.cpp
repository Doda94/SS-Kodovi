#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long n,a[20],brn,br1;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;

for (int i = 1; i<=n;i++){
	cin >> a[i];
	long long q;
	long long x[20],y[20];
	for (int j = 1; j<=a[i];j++){
		
		cin >> x[j] >> y[j];
		q = j;
	}
	if (y[q] == 1){
		br1++;
	}
}

cout << br1;

return 0;
}

