#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int d,m;
string a,b;

cin >> d >> m;

if (d>9)
	a = "dvo";
else 
	a = "jed";
	
if (m>9)
	b = "dvo";
else 
	b = "jed";
	
if (b == "dvo")
	if (m%10 != 0)
	cout << m % 10 << m/10;
	else
		cout << m/10;
else if (b == "jed")
	cout << m << 0;	

if (a == "dvo")
	cout << d % 10 << d/10;
else if (a == "jed")
	cout << d << 0;	


return 0;
}

