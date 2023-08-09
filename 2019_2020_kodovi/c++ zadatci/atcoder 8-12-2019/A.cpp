#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long a,b,c;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> a >> b >> c;

long long d = a+b+c;

if (d >= 22)
	cout << "bust";
else
	cout << "win";





return 0;
}

