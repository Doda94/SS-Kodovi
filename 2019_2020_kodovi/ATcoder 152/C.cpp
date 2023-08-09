#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

long long n,p[200200],zr; 

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;

for (int i = 1; i<=n; i++)
	cin >> p[i];

for (int i = n; i>0; i--){
	if (p[i] <= p[i-1])
		zr++;
}


cout << zr+1;

return 0;
}

