#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long a = 9999900000;
long long b = 2 * pow (10,8);

if ( a > b)
	cout << a;
else 
	cout << b;


return 0;
}

