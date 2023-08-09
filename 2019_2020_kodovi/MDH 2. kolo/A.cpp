#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int k;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> k;

if (k<60)
	cout << "UBRZAJ";
else if (k>60)
	cout << "USPORI";
else
	cout << "...";
	
return 0;
}

