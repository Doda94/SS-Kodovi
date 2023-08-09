#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

long long n[1000005],m,naj,l[1000005],br;


int main () {
n[0] = 1;
long long k = 0;
while (n[k] != 0){
	k++;
	cin >> n[k];
	if (n[k]>naj){
		naj = n[k];
	}
	l[n[k]] = 1;
}
for (int i = 1; i<=naj ; i++){
	if (l[i] == 0){
		br += i;
	}
}
long long f= pow (10,9) + 7;
cout << br%f;
return 0;
}

