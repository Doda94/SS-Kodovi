#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

long long a,b;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> a >> b;

if (a%b == 0)
	cout << a/b;
else
	cout << (a/b)+1;


return 0;
}

