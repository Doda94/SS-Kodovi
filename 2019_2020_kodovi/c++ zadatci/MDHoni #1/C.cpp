#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

string a,b,q,w,p,o;
long long rj,c,br,r;


int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> a >> b;
q = b[0]; 
w = b[1];
//cout << q << w;

c = a.length();
br = 0;
int m = c-1;

for (int i = 0; i<=c;i++){
	p = a[i];
	for (int k = 1;k<=c;k++){
		o = a[k];
		if (p==q && o==w){
//			cout << p << o;
			br++;
			a[i] = i*k;
			a[k] = i*k*2;
			break;
		} 
	}
}

cout << br;

return 0;
}

