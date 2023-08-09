#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

long long n,t[1010],z[1010],l[1010],zr,rj[1010],med,krj[1010],pr,ist,kraj;
vector <long long> vec;
bool msf (long long a, long long b){
	return a>b;
}

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;

for (int i = 0; i<n;i++){
	cin >> t[i] >> z[i];
	zr += t[i];
	l[i] = z[i];
	if (z[i] == z[i-1])
		ist++;
}

sort (l,l+n,msf);

for (int i = 0; i<n; i++){
	if (zr-l[i] >= 0){
		rj[i] = l[i];
		zr -= l[i];
	}
	else {
		rj [i] = zr;
		zr = 0;
	}
}


for(int i = 0; i<n; i++){
	if (rj[i] == 0)
		kraj++;
	for (int k = 0; k<n; k++){
		if (l[i] == z[k] && krj[k] == 0){
		krj[k] = rj[i];
		pr = k;
		break;
		}
	}
}


cout << kraj << endl;
for (int i = 0; i<n; i++)
	cout << krj[i] << " ";
	
	
return 0;
}

