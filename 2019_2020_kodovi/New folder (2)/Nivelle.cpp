#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

double n,naj,br,zbr;
long long a,b;
string s;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> s;

for (int i = 0; i<n-1; i++){
	double q = i+1;
	br = 0;
	while (s[q] == s[q-1]){
		q++;
		br++;
		}

	if (br>naj){
		naj = q;
		a = i+1;
		b = q;
	}
}



if (1/naj < 2/n)
	cout << a << " " << b;
else 
	cout << 1 << " " << n;

return 0;
}

