#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

bool msf (int a ,int b){
	int d=a,e=b;
	int c=0,l=0;
	while (d > 0){
		d /= 10;
		c++;
	}
	while (e > 0){
		e /= 10;
		l++;
	}
	if (c != l)
		return c<l;
	else if ( c==0 && l==0)
		return true;
	else
		return a>b;
}

int a[10];

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);



for (int i = 0;i<9;i++)
	cin >> a[i];

sort (a,a+9,msf);

for (int i = 0;i<9;i++)
	cout << a[i] << "\n";


return 0;
}

