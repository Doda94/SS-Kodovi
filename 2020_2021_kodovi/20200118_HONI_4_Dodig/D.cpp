#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

long long n,k,h[300300],s[300300];

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> k;

for (int i = 0; i<n; i++)
	cin >> h[i];

for (int i = 0; i<n; i++){
	for (int q = 0; q<n; q++){
		if (h[i] % h[q] == k && q != i)
			s[i]++;
	}
	cout << s[i] << " ";
}

return 0;
}

