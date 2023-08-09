#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long n,k,m,a[105],q;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> k >> m;


for (int i = 1;i<n;i++){
	cin >> a[i];
	q += a[i];
}

if (q/n >= m)
	cout << 0;
else if ((m*n - q)<= k)
	cout << m*n - q;
else 
	cout << -1;
	
return 0;
}


