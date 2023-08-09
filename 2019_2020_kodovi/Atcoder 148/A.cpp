#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long a,b,c[10];

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);



cin >> a >> b;

c[a] = 1;
c[b] = 1;

for (int i = 1;i<=3;i++)
	if (c[i] == 0)
		cout << i;




return 0;
}

