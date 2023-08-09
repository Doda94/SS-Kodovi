#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

long long a,b;
string x,y;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> a >> b;

stringstream q;
stringstream w;
q << a;
w << b;
string e = q.str();
string r = w.str();

for (int i = 0; i<b; i++)
	x += e;
	
for (int i = 0; i<a; i++)
	y += r;

//if (a>b)
//	cout << y;
//else 
//	cout << x;

cout << q+q;



return 0;
}

