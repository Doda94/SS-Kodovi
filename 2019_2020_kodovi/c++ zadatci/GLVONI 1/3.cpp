#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

long long m,v,t,a,b,c,n,q,w,e,f,br;
string s;

int main () {
f = pow (10,9) + 7;
cin >> m >> v >> t >> a >> b >> c >> n;

for (int i = 1; i<=n; i++){
	cin >> s;
	if (s == "math"){
		br ++;
		m += a;
		m = m % f;
		v = v*b ;
		v = v % f;
		t += br*br + br + c;
		t = t % f;
	}
}

//f = pow (10,9) + 7;
//
//q = m%f;
//w = v%f;
//e = t%f;


cout << m << "\n" << v << "\n" << t;




return 0;
}

