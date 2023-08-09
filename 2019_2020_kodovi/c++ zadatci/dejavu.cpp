#include <iostream>

using namespace std;

long long x[100005],y[100005],x1[100005],y1[100005],rj;

int main () {

long long n;
cin >> n;

for (int i = 0; i<n; i++){
	cin >> x[i] >> y[i];
	x1[x[i]]++;
	y1[y[i]]++;
}

for (int i=0; i<n; i++){
	rj += (x1[x[i]] - 1)*(y1[y[i]] - 1);
}

cout << rj;



return 0;
}


