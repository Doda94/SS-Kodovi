#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long k,zr[105],zbr;
string a[105];

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> k;
int i = 0;
do{
i++;	
cin >> a[i];
if (a[i] == "JOS")
	zr[i] += k+zr[i-1];
}while (a[i] != "BWA");

for (int k = 0;k<=i;k++)
	zbr += zr[k];

cout << zbr;

return 0;
}

