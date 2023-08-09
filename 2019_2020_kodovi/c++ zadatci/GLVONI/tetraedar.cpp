#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main () {

long long n[100005],rj,k,f;

cin >> k ;

n[1] = 1;
n[2] = 2;
n[3] = 4;
n[4] = 8;

f = pow (10,9) + 7;

for (int i = 5 ; i<=k ; i++){
	n[i] = n[i-4] + n[i-3] + n[i-2] + n[i-1];
	n[i] = n[i]%f;
	
}



cout << n[k];

return 0;
}

