#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long a,b,k;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> a >> b >> k;

long long q = k;
k-=a;
if (k>0)
	if (k>b)
		cout << 0 << " "<< 0;
	else
		cout << 0 << " "<< b-k;
else
	cout << a-q << " " << b;




return 0;
}

