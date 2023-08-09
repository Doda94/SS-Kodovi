#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int n,zr;
string s;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> s;

for (int i = n-2;i>=0;i-=2){
	if (s[i] == 'x')
		i-=2;
	int broj = int (s[i]) - 48;
	broj *= 2;
	int zbroj = 10;
	int r = broj;
	
//	broj = zbroj;
	s[i] =broj+48;
//	cout << s[i] << endl;
}

for (int i = 0;i<n;i++)
	if (s[i] != 'x')
		zr += int (s[i] - 48);
	
cout << zr*9%10;



return 0;
}

