#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int n,m;
string s;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> m >> s;

int sati = n*5;

int sat = int(s[0] - '0')*10;
sat += int(s[1] - '0');

int minute = int(s[3] - '0')*10;
minute += int(s[4] - '0');

minute += m;

if (minute>sati){
	sat+= minute/sati;
	minute = minute%sati;
}

if (sat / 10 == 0 && minute / 10 == 0)
	cout << 0 << sat << ":" << 0 << minute;
else if (sat / 10 == 0)
	cout << 0 << sat << ":" << minute;
else if (minute / 10 == 0)
	cout << sat << ":" << 0 << minute;
else
	cout << sat << ":" << minute;	
	
return 0;
}

