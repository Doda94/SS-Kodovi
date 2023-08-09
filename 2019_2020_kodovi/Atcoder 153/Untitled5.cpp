#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

long long h,zr;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> h;

long long q = 1;

while (h>0){
	long long a = h/2;
	q *= 2;
	h /= 2;
	if (a == 1)
		zr+= q;
}
				
cout << zr*2-1;

return 0;
}

