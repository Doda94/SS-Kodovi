#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long a,b,c,rj=1000000000005,d;


int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> a >> b;
if (a>b)
	d = a;
else d = b;

c = a*b;

for (int i = d;i<a*b;i++){
	if (i % a == 0 && i % b == 0)
		if (i<rj){
			rj = i;
			break;
		}
	if (rj != 1000000000005)
		break;
}

if (rj < c)
	cout << rj;
else cout << c;

return 0;
}

