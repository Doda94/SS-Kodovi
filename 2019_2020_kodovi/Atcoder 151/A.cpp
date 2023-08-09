#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;



int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

char c;
cin >> c;
int a = int(c);
a += 1;
if (a == 123)
	cout << 'a';
else 
	cout << char (a);


return 0;
}

