#include <iostream>
#include <string>

using namespace std;

string a;
int rj;

int main () {

cin >> a;

if (a=="SAT")
	rj = 1;
if (a=="SUN")
	rj = 7;
if (a=="MON")
	rj = 6;
if (a=="TUE")
	rj = 5;
if (a=="WED")
	rj = 4;
if (a=="THU")
	rj = 3;
if (a=="FRI")
	rj = 2; 


cout << rj;


return 0;
}

